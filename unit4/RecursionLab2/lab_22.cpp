/*
 * Name        : lab_22.cpp
 * Author      : YOUR NAME
 * Description : Recursive Functions
 */

#include "lab_22.h"

// CODE FUNCTION DEFINITIONS HERE
unsigned int Factorial(unsigned int value)
{
   
    if (value<=1)
    {
        return 1;
    }
    
   return (value*Factorial(value-1));

  
}

unsigned int Fibonacci(unsigned int fib_value)
{
    if(fib_value<2)
    {
        return fib_value;
    }
    else
    {
        return (Fibonacci(fib_value-1) + Fibonacci(fib_value-2));
    }
}
bool WordIsPalindrome(string word)
{
    int length=word.length();
    if(length<=1)
    {
        return true;
    }
    else if (word[0]==word[length-1])
    {
        word=word.substr(1,(length-2));
        return WordIsPalindrome(word);
    }
    else
    {
        return false;
    }
}

string ArrayForwardsAsString(int array[], unsigned int start,
                             unsigned int size)
{
    stringstream ss;
    if(start==size)
    {
        return ss.str();
    }
    
    ss<<array[start];
    ss<<" ";
    return ss.str()+ArrayForwardsAsString(array,start+1,size);
}                            

string ArrayBackwardsAsString(int array[], int start, unsigned int size)
{
     stringstream ss;
    if(start<0)
    {
        return ss.str();
    }
    
    ss<<array[start];
    ss<<" ";
    return ss.str()+ArrayBackwardsAsString(array,start-1,size);
    
}