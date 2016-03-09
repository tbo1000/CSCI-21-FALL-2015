#include "item.h"

 Item::Item(string name,unsigned int value)
 {
     name_=name;
     value_=value;
 }
 Item::~Item()
 {
     
 }
 
 void Item::set_name(string name)
 {
 name_=name;
 }
 void Item::set_value(unsigned int value)
 {
     value_=value;
 }
 string Item::name()
 {
     return name_;
 }
 unsigned int Item::value()
 {
     return value_;
 }
 string Item::ToString()
 {
     stringstream ss;
     ss<<Item::name()<<", $"<<Item::value();
     return ss.str();
 }