/*
 * Name        : bank.h
 * Author      : Tyler O'Guinn
 * Description : Header file for bank.cpp
 */
 
 #include "bank.h"
 
 Bank::Bank(double balance,double interest_rate)
 {
     balance_=balance;
     interest_rate_=interest_rate;
 }
 Bank::~Bank
 {
     
 }
 void Bank::set_balance(double balance)
 {
     balance_=balance;
 }
 double Bank::get_balance()
 {
     return balance_;
 }
 void Bank::set_interest_rate(double interest_rate)
 {
     interest_rate_=interest_rate;
 }
 double Bank::get_interest_rate()
 {
     return interest_rate_;
 }