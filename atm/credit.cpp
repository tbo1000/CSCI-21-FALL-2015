/*
 * Name        : credit.cpp
 * Author      : Tyler O'Guinn
 * Description : class for credit card accounts
 */
 
 #include "credit.h"
 
 Credit::Credit(double balance,double interest_rate,string pin)
 {
     Bank::set_balance(balance);
     Bank::set_interest_rate(interest_rate);
     pin_=pin;
 }
 
 Credit::~Credit()
 {
     
 }
 
 void Credit::Withdraw(double request)
 {
     Bank::set_balance(Bank::get_balance()+request);
     //pulls out as much money as you need
 }
 
 bool Credit::PayBill(double input)
 {
     amount=Bank::get_balance()+(Bank::get_balance()*(Bank::get_interest_rate()/12));
     //checks amount needed to pay
     Bank::set_balance((-input)+amount)
     //subtracts to see if you overpay and puts that money on hand
     if (bank::get_balance()<=0)
     {//checks to see if balance is payed off
         return true;
     }
     else
     {
         return false;
     }
 }
 
 bool Credit::Access(string pin)
{
    if (pin_==pin)//verifies pin is correct
    {
        return true;
    }
    else
    {
        return false;
    }
}