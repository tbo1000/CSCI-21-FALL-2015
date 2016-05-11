/*
 * Name        : bs_tree.h
 * Author      : Tyler O'Guinn
 * Description : Header file for the binary search tree
 */
#ifndef BSTREE_H
#define BSTREE_H

#include "bst_node.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class BSTree

{
    public:
    BSTree();
    //default constructor
    ~BSTree();
    //default destructor, calls clear
    bool Insert(int insert);
    //public insert funtion to call the insert function
    void Clear();
    //public clear function to call the clear function
    unsigned int size() const;
    //accessor for size
    string InOrder();
    //public function to call the inorder function
    private:
    bool Insert(int,BSTNode*&);
    //private function that creates new nodes in the tree
    void Clear(BSTNode*&);
    //private function that recurses and clears the tree
    string InOrder(BSTNode*);
    //private function that outputs the numbers in the tree in order
    
    BSTNode* root_;
    //pointer to the root of the tree
    unsigned int size_;
    //int for number of nodes in the tree
};

#endif