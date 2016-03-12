/*
 * Name        : checking.h
 * Author      : Tyler O'Guinn
 * Description : class for checking accounts
 */
 
 #include "checking.h"
 
 Checking::Checking(double balance,double interest_rate,string pin)
 {
     Bank::set_balance(balance);
     Bank::set_interest_rate(interest_rate);
     pin_=pin;
 }
 
Checking::~Checking()
{
    
}

void Checking::Deposit(double input)
{
    Bank::set_balance(Bank::get_balance()+input)
    //sets the new balance plus the money put in
}

bool Checking::Withdraw(double request)
{
    if (Bank::get_balance()>request)
    {
        Bank::set_balance(Bank::get_balance()-request)
        return true;
        //checks if you can pull out the required amount and then pulls it out
    }
    else 
    {
        cout<<"you do not have enough money"<<endl;
        return false;
    }
}

bool Checking::Access(string pin)
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