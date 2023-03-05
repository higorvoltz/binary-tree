#include <iostream>
#include <cstddef>
#include "bynaryTree.h"

using namespace std;

 BinaryTreeSearch::BinaryTreeSearch()
 {
  root = NULL;
 }

  BinaryTreeSearch::~BinaryTreeSearch()
  {}

  void BinaryTreeSearch::deleteTree(Node* currentNode)
  {}

  Node* BinaryTreeSearch::obtainRoot()
  {
    return root;
  }

  bool BinaryTreeSearch::isEmpty()
  {
    return root == NULL;
  }

  bool BinaryTreeSearch::isFull()
  {
    try {
      Node* temp = new Node;
      delete temp;
      return false;
    } catch (bad_alloc exception){
      return true;

    }
  }

  void BinaryTreeSearch::insert(Student student)
  {}

  void BinaryTreeSearch::remove(Student student)
  {}

  void BinaryTreeSearch::removeSearch(Student student, Node*& currentNode)
  {}

  void BinaryTreeSearch::deleteNode(Node*& currentNode)
  {}

  void BinaryTreeSearch::obtainSuccessor(Student& SuccessorStudent, Node* temp)
  {}

  void BinaryTreeSearch::search(Student& student, bool& search)
  {}

  void BinaryTreeSearch::printPreOrder(Node* currentNode)
  {}

  void BinaryTreeSearch::printInOrder(Node* currentNode)
  {}

  void BinaryTreeSearch::printPosOrder(Node* currentNode)
  {}