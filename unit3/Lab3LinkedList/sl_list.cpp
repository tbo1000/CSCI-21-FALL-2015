/*
 * Name        : sl_list.cpp
 * Author      : Tyler O'Guinn
 * Description : Function definitions for SLList class
 */

#include "sl_list.h"

SLList::SLList()
{
    head_=NULL;
    size_=0;
}

SLList::~SLList()
{
   SLList::Clear();
}

void SLList::InsertHead(int contents)
{
    
  SLNode* node = new SLNode(contents);
  node->set_next_node(head_);
  head_ = node;
  size_++;
}

void SLList::RemoveHead()
{
  if (head_!=NULL)
  {
        SLNode* temp = head_;
        temp=head_->next_node();
        
        delete head_;
        head_=temp;
        size_--;
  }
}

void SLList::Clear()
{

    while(head_!=NULL)
    {
        SLNode* temp = head_;
        temp=head_->next_node();
        delete head_;
        head_=temp;
    }

    size_=0;
    
}


const unsigned int SLList::size()
{
    return size_;
}

const string SLList::ToString() 
{
    stringstream ss;
   if (size_!=0)
   {
       SLNode* temp = head_;
       while (temp!=NULL)
       {
           ss<<temp->contents();
           if (temp->next_node()!=NULL)
           {
               ss<<", ";
           }
           temp = temp->next_node();
       }
       return ss.str();
   }
    else
    {
        return "";
    }
}