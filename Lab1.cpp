/*++
 * Name        : lab_1.cpp
 * Author      : Tyler O'Guinn  
 * Date        : 1/27/2016
 * Description : Our First Lab of the Semester!
 */
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
 * Create a program based on the comments below
 * @param none
 * @return none
 */


 string checkExperience (char hasExperience) 
{
    if (hasExperience=='y')
    {
    cout<<"Welcome back"<<endl;
    }
    else if (hasExperience=='n')
    {
        cout<<"Get ready to have some fun"<<endl;
        
    }
    else{
        cout<<"that is an invalid character"<<endl;
    }
    return string("");
    
}

void FirstLab() {
 string first_name;
 char programmed_before='z';
 char my_character ='z';
 cout << "Welcome new user"<<endl;
 cout <<"What is your first name?"<<endl;
 cin>>first_name;
 cout<<"Nice to meet you, "<<first_name<<endl;
 cout <<"Have you programmed before? Please answer 'y' for yes and 'n' for no"<<endl;
 cin>>programmed_before;
 checkExperience (programmed_before);
 
  // (1) Declare a string variable named first_name

  // (2) Declare a character variable named programmed_before and another named
  //     my_character. Initialize both of them to the value 'z'

  // (3) Display a welcome message to standard output

  // (4) Prompt the user for their first name

  // (5) Read the name from standard input and store in the variable first_name

  // (6) Display the message "Nice to meet you, NAME" where NAME is replaced
  //     with the value of first_name

  // (7) Ask the user if they have programmed before. Make sure you inform them
  //     that you want the answer as a single character (y/n)

  // (8): Read in the answer from standard input and store in the variable
  //      programmed_before

  // (9): Call the function checkExperience appropriately so that the message will display

}

/*
 * Create a string message based upon whether or not a user has 
 * programming experience.
 * @param hasExperience a char ('y'es or 'n'o) representing whether
 *        or not a user has programming experience
 * @return "Welcome back" when hasExperience is 'y', else "Get ready to
 *         have some fun"
 */


int main()
{
  FirstLab();
  return 0;
}