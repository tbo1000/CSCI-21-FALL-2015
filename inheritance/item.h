/*
 *Name        : item.h
 *Author      : Tyler O'Guinn
 *Description : Header file for item
 */
 
 #ifndef ITEM_H
 #define ITEM_H
 
 #include <iostream>
 #include <sstream>
 #include <iomanip>
 using namespace std;
 class Item
 {
 public:
 Item(string name="item",unsigned int value =0);
 virtual ~Item();
 
 void set_name(string name);
 void set_value(unsigned int value);
 string name();
 unsigned int value();
 string ToString();
 
 protected:
 string name_;
 unsigned int value_;
 };
 
 #endif