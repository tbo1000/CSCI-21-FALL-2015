/*
 *Name       : food_item.h
 *Author     : Tyler O'Guinn
 *Description: Header file for food_item.cpp
 */
 
 #ifndef FOOD_ITEM_H
 #define FOOD_ITEM_H
 
 #include "item.h"
 
 class FoodItem :public Item
 {
     public:
     
     FoodItem(string name = "fooditem", unsigned int value=0.00, unsigned int calories = 0,string unit_of_measure="nounits",double units=0);
     
     virtual ~FoodItem();
     
     void set_calories(unsigned int calories);
     void set_unit_of_measure(string unit_of_measure);
     void set_units(double units);
     unsigned int calories();
     string unit_of_measure();
     double units();
     
     string ToString();
     
     private:
     unsigned int calories_;
     string unit_of_measure_;
     double units_;
 };
 #endif