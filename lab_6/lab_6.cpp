/*
 * Name        : lab_6.cpp
 * Author      : Tyler O'Guinn
 * Description : Working with Arrays
 */

#include "lab_6.h"

string PrepareForDisplay(int values[], int size, char separator)
{
    stringstream ss;
    for (int i = 0; i<size-1;i++)
    {
        ss<<values[i]<<separator;
    }
    ss<<values[size-1];
    return ss.str();
}
bool HasValue(int values[],int size,int value)
{
    for(int i=0;i<size;i++)
    {
        if (values[i]==value)
        {
            return true;
        }
       
    }
    return false;
}
int ValueAt(int values[],int size,int index,bool &error)
{
    error = false;
    if(index>=size||index<0)
    {
        error=true;
        return 0;
        
    }
    else
    {
        return values[index];
    }
}
int Sum(int values[],int size)
{
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum=sum+values[i];
    }
    return sum;
}
bool SwapValues(int values[],int size,int index1,int index2)
{
    if(index1>=size||index1<0||index2>=size||index2<0)
    {
        return false;
        
    }
    else
    {
        int temp = values[index2];
        values[index2]=values[index1];
        values[index1]=temp;
    }
    return true;
}