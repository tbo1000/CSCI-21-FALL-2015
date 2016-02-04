/*
 * Name        : lab_3.cpp
 * Author      : FILL IN
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) {
  if (item=="porridge")
  {
    if (number==1)
    {
      return ("This porridge is too hot");
    }
    else if(number==2)
    {
      return("This porridge is too hot");
    }
    else
    {
      return("This porridge is just right");
    }
  }
  if(item=="chair")
  {
    if (number==1)
    {
      return("This chair is too big");
    }
    else if(number==2)
    {
      return("This chair is too small");
    }
    else
    {
      return("This chair is just right");
  }
  }
  else
  {
    if(number==1)
    {
      return("This bed is too hard");
    }
    else if(number==2)
    {
      return("This bed is too soft");
    }
    else
    {
      return("This bed is just right");
    }
  }
}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) {
  player_one=toupper(player_one);
  player_two=toupper(player_two);
  switch(player_one)
 { case 'R':
 
  switch (player_two)
  {
  case 'R':
    return 3;
    break;
  case 'P':
    return 2;
    break;
  case 'S':
    return 1;
    break;
  default:
 return 0;
  break;
}
  break;
  
  case'P':
   switch (player_two)
  {
  case 'R':
    return 1;
    break;
  case 'P':
    return 3;
    break;
  case 'S':
    return 2;
    break;
  default:
 return 0;
    break;
  }
break;

  case'S':
   switch (player_two)
   {
  case 'R':
    return 2;
    break;
  case 'P':
    return 1;
    break;
  case 'S':
    return 3;
    break;
  default:
  return 0;
  break;
   }
   break;
  return 0;
  break;
}
}


/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
  for (int i=0; i<input.length();i++)
  {
    input[i]=tolower(input[i]);
  }
  return input;
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
   for (int i=0; i<input.length();i++)
  {
    input[i]=toupper(input[i]);
  }
  return input;
}
// int main()
// {
//   string iteminput;
//   string item;
//   int number;
//   char player1;
//   char player2;
//   cout<<"what item does goldilocks use"<<endl;
//   cin>>item;
//   cout<<"what number for the goldilocks story?"<<endl;
//   cin>>number;
  
// iteminput=ToLower(item);
// cout<< Goldilocks(iteminput,number)<<endl;
// cout<<"Player 1 what do you want to pick"<<endl;
// cin>>(player1);
 
// cout<<"Player 2 what do you want to pick"<<endl;
// cin>>(player2);
 
// cout<<RockScissorPaper(player1,player2)<<endl;
// if (RockScissorPaper(player1,player2)==1)
// {cout<<player1<<" beats "<<player2<<" Player 1 wins!"<<endl;}
// else if(RockScissorPaper(player1,player2)==2)
// {cout<<player2<<" beats "<<player1<<" Player 2 wins!"<<endl;}
// else if(RockScissorPaper(player1,player2)==3)
// {cout<<"Draw. you both picked "<<player1<<endl;}
// else 
// {cout<<"invalid response"<<endl;}
// return 0;
// }