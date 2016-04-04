      
#ifndef SL_LIST_H
#define SL_LIST_H

#include "sl_node.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class SLList
{
  public:
  //default constructor
  SLList();
  //destructor
  ~SLList();
  //function that creates new node with the parameter
  void InsertHead(int head);
  void InsertTail(int tail);
  //function that removes the head node from the list. if it is there
  void RemoveHead();
  void RemoveTail();
  //clears the contents of the list and frees up memory space
  void Clear();
  const int GetHead();
  const int GetTail();
  //accessor for the size
  const unsigned int size();
  //function to convert the contents of the nodes to a string and return it
  const string ToString();
  
  private:
  SLNode* head_;
  SLNode* tail_;
  unsigned int size_;
};

#endif