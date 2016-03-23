/*
 * Name        : lab_12.cpp
 * Author      : Tyler O'Guinn
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_12.h"

// CODE HERE -- FUNCTION DEFINITIONS
int* MakeDynoIntArray(unsigned int size)
{
   int *array;
   array = new int[size];
   return array;
   
}

int Sum(int* the_array, unsigned int array_size)
{
    int sum=0;
    if (the_array==NULL)
    {
        throw "NULL ARRAY REFERENCE";
    }
    for (int i=0; i<array_size; i++)
    {
        sum=sum+the_array[i];
    }
    return sum;
}

int Max(int* the_array, unsigned int array_size)
{

      if (the_array==NULL)
    {
        throw "NULL ARRAY REFERENCE";
    }
    int max= the_array[0];
    for (int i=0; i<array_size; i++)
    {
        if(the_array[i]>max)
        {
            max=the_array[i];
        }
    }
    
    return max;
}

int Min(int* the_array, unsigned int array_size)
{
    
      if (the_array==NULL)
    {
        
        throw "NULL ARRAY REFERENCE";
    }
    int min=the_array[0];
    for (int i=0; i<array_size; i++)
    {
        if(the_array[i]<min)
        {
            min=the_array[i];
        }
    }
    return min;
}