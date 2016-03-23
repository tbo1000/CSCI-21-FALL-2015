


#ifndef CREDIT_H
#define CREDIT_H

#include "bank.h"

class Credit: public Bank
{
 public:
 Credit(double balance,double interest_rate,string pin);
 virtual ~Credit();
 
 void Withdraw(double request);
 void PayBill(double input);
 bool Access(string pin);
 
 private:
 string pin_;
};
#endif