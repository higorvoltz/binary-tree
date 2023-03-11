#include <iostream>
#include <cstddef>
#include "bynaryTree.h"

using namespace std;

 BinaryTreeSearch::BinaryTreeSearch()
 {
  root = NULL;
 }

  BinaryTreeSearch::~BinaryTreeSearch()
  {
    deleteTree(root);
  }

  void BinaryTreeSearch::deleteTree(Node* currentNode)
  {
    if (currentNode != NULL){
      deleteTree(currentNode->leftChild);
      deleteTree(currentNode->rightChild);
      delete currentNode;
    }
  }

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
  {
    if (isFull()) {
      cout << "tree is full" << endl;
      cout << "not is possible to insert" << endl;
    } else {
      Node* newNode = new Node;
      newNode->student = student;
      newNode->rightChild = NULL;
      newNode->leftChild = NULL;
      if (root == NULL){
        root = newNode;
      } else {
        Node* temp = root;
        while (temp != NULL) {
          if (student.obtainId() < temp->student.obtainId()) {
            if (temp->leftChild == NULL){
              temp->leftChild = newNode;
              break;
            } else {
              temp = temp->leftChild;
            }
          } else {
            if (temp->rightChild == NULL){
              temp->rightChild = newNode;
              break;
            } else {
              temp = temp->rightChild;
            }
          }
        }
      }
    }
  }

  void BinaryTreeSearch::remove(Student student)
  {
    removeSearch(student, root);
  }

  void BinaryTreeSearch::removeSearch(Student student, Node*& currentNode)
  {
    if (student.obtainId() < currentNode->student.obtainId()){
      removeSearch(student, currentNode->leftChild);
    } else if (student.obtainId() > currentNode->student.obtainId()){
      removeSearch(student, currentNode->rightChild);
    } else {
      deleteNode(currentNode);
    }
  }

  void BinaryTreeSearch::deleteNode(Node*& currentNode)
  {
    Node* temp = currentNode;
    if (currentNode->leftChild == NULL){
      currentNode = currentNode->rightChild;
      delete temp;
    } else if (currentNode->rightChild == NULL){
      currentNode = currentNode->leftChild;
      delete temp;
    } else {
      Student StudentSuccessor;
      obtainSuccessor(StudentSuccessor, currentNode);
      currentNode->student = StudentSuccessor;
      removeSearch(StudentSuccessor, currentNode->rightChild);
    }
  }

  void BinaryTreeSearch::obtainSuccessor(Student& StudentSuccessor, Node* temp)
  {
    temp = temp->rightChild;
    while(temp->leftChild != NULL){
      temp = temp->leftChild;
    }
    StudentSuccessor = temp->student;
  }

  void BinaryTreeSearch::search(Student& student, bool& search)
  {
    search = false;
    Node* currentNode = root;
    while (currentNode != NULL) {
      if (student.obtainId() < currentNode->student.obtainId()) {
        currentNode = currentNode->leftChild;
      } else if (student.obtainId() > currentNode->student.obtainId()) {
        currentNode = currentNode->rightChild;
      } else {
        search = true;
        student = currentNode->student;
        break;
      }
    }
  }

  void BinaryTreeSearch::printPreOrder(Node* currentNode)
  {
    if (currentNode != NULL) {
      cout << currentNode->student.obtainName() << ": ";
      cout <<currentNode->student.obtainId() << endl;

      printPreOrder(currentNode->leftChild);
      printPreOrder(currentNode->rightChild);
    }
  }

  void BinaryTreeSearch::printInOrder(Node* currentNode)
  {
    if (currentNode != NULL){
      printInOrder(currentNode->leftChild);
      cout << currentNode->student.obtainName() << ": ";
      cout <<currentNode->student.obtainId() << endl;
      printInOrder(currentNode->rightChild);

    }
  }

  void BinaryTreeSearch::printPosOrder(Node* currentNode)
  {
    if (currentNode != NULL){
      printPosOrder(currentNode->leftChild);
      printPosOrder(currentNode->rightChild);

      cout << currentNode->student.obtainName() << ": ";
      cout <<currentNode->student.obtainId() << endl;
    }
  }