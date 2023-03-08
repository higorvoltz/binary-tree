#include <iostream>
#include "bynaryTree.h"

using namespace std;

int main()
{
  int option;

  cout << "binaryTree program \n";

  do{
    cout << "type 0 to stop program\n";
    cout << "type 1 to check if tree is empty\n";
    cout << "type 2 to check if tree is full\n";
    cout << "type 3 to insert new node\n";
    cin >> option;
  } while (option != 0);
  return 0;
}