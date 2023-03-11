#include <iostream>
#include "bynaryTree.h"

using namespace std;

int main()
{
  BinaryTreeSearch Studenttree;
  int option;
  int id;
  string name;
  int print;
  bool search = false;

  cout << "binaryTree program \n";

  do{
    cout << "type 0 to stop program\n";
    cout << "type 1 to insert a student\n";
    cout << "type 2 to remove a student\n";
    cout << "type 3 to search a student\n";
    cout << "type 4 to print a tree\n";
    cin >> option;

    if (option == 1){
      cout << "type the name of student: \n";
      cin >> name;
      cout << "type the id of student: \n";
      cin >> id;
      Student student(id, name);
      if (Studenttree.isFull()){
        cout << "tree is full \n";
        cout << "not is possible to insert new students\n";
      } else {
        Studenttree.insert(student);
      }
    } else if (option == 2){
      cout << "type the id  of student that will be removed\n";
      cin >> id;
      Student student(id, " ");
      Studenttree.remove(student);
    } else if (option == 3) {
      cout << "type the id of student that will be searched \n";
      cin >> id;
      Student student(id, " ");
      Studenttree.search(student, search);
      if (search) {
        cout << "student found\n";
        cout << "name: " << student.obtainName() << endl;
        cout << "id: " << student.obtainId() << endl;
      } else {
        cout << "student not found\n";
      }
    } else if (option == 4) {
      cout << "type 1 to print pre order\n";
      cout << "type 2 to print in order\n";
      cout << "type 3 to print pos order\n";
      cin >> print;

      if (print == 1){
        Studenttree.printPreOrder(Studenttree.obtainRoot());
      } else if (print == 2) {
        Studenttree.printInOrder(Studenttree.obtainRoot());
      } else {
        Studenttree.printPosOrder(Studenttree.obtainRoot());
      }
    }
  } while (option != 0);
  return 0;
}