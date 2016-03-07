#include "money.h"

// The Constructor, Accessors and Mutators have been defined for you
Money::Money(int dollars, int cents)
      : dollars_(dollars),
        cents_(cents) {
}

int Money::dollars() const {
    return dollars_;
}

int Money::cents() const {
    return cents_;
}

void Money::set_dollars(int dollars) {
  dollars_ = dollars;
}

void Money::set_cents(int cents) {
  cents_ = cents;
}

// This function definition provided as an example and is FULLY COMPLETE
const Money operator +(const Money& amount1, const Money& amount2) {
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Add all the cents together
  int sum_all_cents = all_cents1 + all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(sum_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
  if (sum_all_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

const Money operator -(const Money& amount1, const Money& amount2)
{
  int all_cents1=amount1.cents_ + amount1.dollars_*100;
  int all_cents2=amount2.cents_ + amount2.dollars_*100;
  int subtraction=all_cents1-all_cents2;
  //take first value minus second
  int abs_all_cents=abs(subtraction);
  int final_dollars= abs_all_cents/100;
  int final_cents= abs_all_cents%100;
  if(subtraction<0)
  //negates if necessary
  {
    final_dollars=-final_dollars;
    final_cents=-final_cents;
  }
  return Money(final_dollars,final_cents);
}

 bool operator ==(const Money &amount1, const Money &amount2)
 {
    int all_cents1=amount1.cents_ + amount1.dollars_*100;
    int all_cents2=amount2.cents_ + amount2.dollars_*100;
    //converts to all cents
    if(all_cents1==all_cents2)
    //compares
    {
      return true;
    }
    else
    {
      return false;
    }
 }
 
 const Money operator -(const Money &amount)
 {
   int final_dollars=-amount.dollars_;
   int final_cents=-amount.cents_;
   return Money(final_dollars,final_cents);
   //turns values negative. outputs them back
 }
 
 ostream& operator <<(ostream &out, const Money &amount)
 {
   if(amount.cents_<0||amount.dollars_<0)//checks if negative
   {
   out<<"$-"<<abs(amount.dollars_)<<"."<<setw(2)<<setfill('0')<<abs(amount.cents_);//does abs value to get rid of double negatives
   return out;
   }
   else
   {
    out<<"$"<<amount.dollars_<<"."<<setw(2)<<setfill('0')<<amount.cents_;
    //otherwise outputs normally
   return out;
   }
 }