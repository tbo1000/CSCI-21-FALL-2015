/*
 * Name        : sl_list.cpp
 * Author      : Tyler O'Guinn
 * Description : Function definitions for SLList class
 */

#include "sl_list.h"

SLList::SLList()
{
    head_=NULL;
    tail_=NULL;
    size_=0;
}

SLList::~SLList()
{
   SLList::Clear();
}

void SLList::InsertHead(int head)
{
    
  SLNode* node = new SLNode(head);
  node->set_next_node(head_);
  head_ = node;
  size_++;
  if(size_==1)
  {
      tail_=head_;
  }
}

void SLList::InsertTail(int tail)
{
    if (size_==0)
    {
        InsertHead(tail);
    }
    else
    {
    SLNode* node = new SLNode(tail);
    tail_->set_next_node(node);
    tail_=node;
    size_++;
    }
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
  if (size_==0)
  {
      tail_=NULL;
      head_=NULL;
  }
}

void SLList::RemoveTail()
{
    if(head_!=NULL)
    {
        if(head_==tail_)
        {
            delete head_;
            head_=NULL;
            tail_=NULL;
           
        }
        else
        {
            SLNode* temp=head_;
            SLNode* prev=tail_;
            while(temp->next_node()!=tail_)
            {
        
                temp=temp->next_node();
            }
            tail_=temp;
            tail_->set_next_node(NULL);
            delete prev;
        }
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
    head_=NULL;
    tail_=NULL;
    
}

const int SLList::GetHead()
{
    if(head_!=NULL)
    {
        return head_->contents();
    }
    else
    {
        return 0;
    }
}

const int SLList::GetTail()
{
    if(head_!=NULL)
    {
        return tail_->contents();
    }
    else
    {
        return 0;
    }
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