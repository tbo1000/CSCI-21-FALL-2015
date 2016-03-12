/*
 * Name        : bank.h
 * Author      : Tyler O'Guinn
 * Description : Header file for bank.cpp
 */

#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

//class bank. the base account class
class Bank
{
    public:
    //constructor 1. sets interest rate and balance
 Bank(double balance,double interest_rate);
 //destructor
 virtual ~Bank();
 //mutator for balance
 void set_balance(double balance);
 //accessor for balance
 double get_balance(); 
 //mutator for interest rate
 void set_interest_rate();
 //accessor for interest rate
 double get_interest_rate();
 
  private:
  double balance_;
  double interest_rate_;
};

#endif