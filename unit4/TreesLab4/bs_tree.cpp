/*
 * Name        : bs_tree.cpp
 * Author      : Tyler O'Guinn
 * Description : Binary search tree function definitions
 */
 
#include "bs_tree.h"

BSTree::BSTree()
{
    root_ = NULL;
    size_ = 0;
}
//creates default values for the variables
BSTree::~BSTree()
{
    Clear();
    //clears the function
}

bool BSTree::Insert(int insert)
{
    return Insert(insert,root_);
    //calls the private insert function
}

void BSTree::Clear()
{
    Clear(root_);
    //calls the private clear function
}

unsigned int BSTree::size() const
{
    return size_;
    //accesses size variable
}

string BSTree::InOrder()
{
    return InOrder(root_);
    //calls the private inorder function
}

bool BSTree::Insert(int insert, BSTNode*& node)
{
   if (node==NULL)
   {
       node = new BSTNode(insert);//creates node if it is empty
       size_++;//increases size
       return true;
   }
   else if (insert>node->contents())
   {
       return Insert(insert,node->right_child());//moves the node to right child if it is greater than the parameter
   }
   else if(insert<node->contents())
   {
       return Insert(insert,node->left_child());//else moves the node to left child if it is less than parameter
   }
   else
   {
       return false;//returns false if parameter is in the tree
   } 
}

void BSTree::Clear(BSTNode*& branch)
{
    if(branch!=NULL)//checks if the node is cleared
    {
    Clear(branch->left_child());//clears left child
    Clear(branch->right_child());//clears right child
    delete branch;//deletes the node
    branch=NULL;//sets node to NULL
    size_--;//decrements the size each time
    }
}

string BSTree::InOrder(BSTNode* order)
{
    stringstream ss;
    if(order!=NULL)
    {
        ss<<InOrder(order->left_child());//goes to left child first
        ss<<order->contents()<<" ";//stores the contents
        ss<<InOrder(order->right_child());//then goes to right child
    }
    return ss.str();//returns the string
}