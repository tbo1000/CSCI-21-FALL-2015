#ifndef BSTNODE_H
#define BSTNODE_H

#include <iostream>
using namespace std;

class BSTNode
{
    public:
    BSTNode();
    BSTNode(int contents);
    ~BSTNode();
    void set_contents(int contents);
    int contents() const;
    int& contents();
    void set_left_child(BSTNode*);
    void set_right_child(BSTNode*);
    BSTNode* left_child() const;
    BSTNode*& left_child();
    BSTNode* right_child() const;
    BSTNode*& right_child();
    
    private:
    BSTNode* left_child_;
    BSTNode* right_child_;
    int contents_;
};

#endif