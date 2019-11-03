/*
Description:
Program to find if a rectange of maximum area
can be made from the given numbers.

Made by: mrjoker05
Date:02/02/2019
*/


#include<iostream>
using namespace std;
int arr[100];


int area( int l , int b)   // Finding area of the reactangle
{
  cout << l*b << endl;
}

void enternum( int num )  // Filling array
{

  for(int i = 0 ; i < num ; i++)
    cin >> arr[i];

}

int check()
{
  temp = arr[0];

  for(int i = 0 ; i < num ; i++)
  {
      
  }
}
int main()
{

  int T,num;
  cin >> T;

  while( T-- )
    {
       cin >> num;
       if ( num % 2 == 0)
          {
            cout << "-1" << endl;
            break ;
          }
       enternum( num );

       check();



    }
}
