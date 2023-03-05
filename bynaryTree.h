#include <iostream>
#include "student.h"

struct Node
{
  Student student;
  Node* leftChild;
  Node* rightChild;
};

class BinaryTreeSearch
{
  private:
  Node* root;

  public:
  BinaryTreeSearch();
  ~BinaryTreeSearch();
  void deleteTree(Node* currentNode);
  Node* obtainRoot();
  bool isEmpty();
  bool isFull();
  void insert(Student student);
  void remove(Student student);
  void removeSearch(Student student, Node*& currentNode);
  void deleteNode(Node*& currentNode);
  void obtainSuccessor(Student& SuccessorStudent, Node* temp);
  void search(Student& student, bool& search);
  void printPreOrder(Node* currentNode);
  void printInOrder(Node* currentNode);
  void printPosOrder(Node* currentNode);
};