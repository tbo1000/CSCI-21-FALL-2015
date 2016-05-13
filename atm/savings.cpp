/*
 * Name        : savings.h
 * Author      : Tyler O'Guinn
 * Description : class for savings accounts
 */
 
 #include "savings.h"
 
 Savings::Savings(double balance,double interest_rate,int withdraw)
 {
     Bank::set_balance(balance);
     Bank::set_interest_rate(interest_rate);
     withdraw_=withdraw;
 }
 
 Savings::~Savings()
 {
     
 }
 
 void Savings::Deposit(double input)
 {
     Bank::set_balance(Bank::get_balance()+input);
 }
 
 bool Savings::Withdraw(double request)
 {
     if (Bank::get_balance()>request)
    {
        Bank::set_balance(Bank::get_balance()-request)
        withdraw_++;
        return true;
    }
    else 
    {
        return false;
    }
 }
 
 double Savings::InterestOverTime(int years)
 {
    double result =0.00;
     result = Bank::get_balance()*((1.00 +Bank::get_interest_rate())^years);
     return result;
 }
 
 int Savings::get_withdraw()
 {
     return withdraw_;
 }