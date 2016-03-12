/*
 * Name        : savings.h
 * Author      : Tyler O'Guinn
 * Description : Header file for savings.cpp
 */
 
 #ifndef SAVINGS_H
 #define SAVINGS_H
 
 #include "bank.h"
 
 class Savings : public Bank
 {
  public:
     Savings(double balance,double interest_rate,int withdraw);
     virtual ~Savings();
     
     void Deposit(double input);
     bool Withdraw(double request);
     double InterestOverTime(int years);
     int get_withdraw();
     
     private:
     int withdraw_;
     
 };
 
 #endif