/*
Description: SURVIVE (codechef-beginner)
Made by: Shubham Arya
Date: 14/02/2019
*/

#include <iostream>
using namespace std;

int main()
  {
    int Box, Eat, Days;
    int Test;

    cin >> Test;

    while( Test-- )
      {
        cin >> Box >> Eat >> Days ;
        Compute();
      }

  }

void Compute()
    {
      if ( Box - Eat > Eat )
        {
          Days++;
          Box = Box - Eat;
           if ( Days < 7)
            Box = Box + Fixed

        }

      else
          {
            Days ++ ;
            Box = Box + Fixed ;
          }
    }

void Check ()
      {
          for (int i = 0 ; i < 7 ; i++)
            {
              if ( Box * 6 > Eat * 6 )
                {

                }
            }
      }
