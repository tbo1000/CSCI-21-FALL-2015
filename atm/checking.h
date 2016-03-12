/*
 * Name        : checking.h
 * Author      : Tyler O'Guinn
 * Description : Header file for checking.cpp
 */
 
 #ifndef CHECKING_H
 #define CHECKING_H
 
 #include "bank.h"
 
 //class for checking accounts
 class Checking:public Bank
 {
  public:
     //constructor to set values for balance interest rate and pin
     Checking(double balance,double interest_rate,string pin);
     //destructor
     virtual ~Checking();
     
     //deposits money into the balance
     void Deposit(double input);
     //withdraws from the balance
     bool Withdraw(double request);
     //checks to make sure you can access bank with correct pin
     bool Access(string pin);
     
     
     private:
     string pin_;
 };
 
 #endif