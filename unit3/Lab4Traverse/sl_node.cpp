/*
 * Name         :  sl_node.cpp
 * Author       :  Tyler O'Guinn
 * Description  :  Node class file function definitions
 */

#include "sl_node.h"

SLNode::SLNode()
{
    next_node_=NULL;
    contents_=0;
}

SLNode::SLNode(int parameter)
{
    next_node_=NULL;
    contents_=parameter;
}

SLNode::~SLNode()
{
    
}

void SLNode::set_contents(int contents)
{
    contents_=contents;
}

int SLNode::contents()
{
    return contents_;
}

void SLNode::set_next_node(SLNode* next_node)
{
    next_node_=next_node;
}

SLNode* SLNode::next_node()
{
    return next_node_;
}