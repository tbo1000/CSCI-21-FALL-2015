      
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
  //function that removes the head node from the list. if it is there
  void RemoveHead();
  //clears the contents of the list and frees up memory space
  void Clear();
  //accessor for the size
  const unsigned int size();
  //function to convert the contents of the nodes to a string and return it
  const string ToString();
  
  private:
  SLNode* head_;
  unsigned int size_;
};

#endif