/*
Description: TLG(Code Chef-beginner)
Made by: Shubham Arya
Date: 03/02/2019
*/

#include<iostream>
using namespace std;
int win;
int max = 0;


void enterr(int a , int b)
{

  if( a > b )
  {

    if ( a-b > max)
      {
        max = a-b;
        win = 1;
      }

  }

  else
  {

    if ( b-a > max)
      {
        max = b-a;
        win = 2;
      }

  }
}



int main()
{
  int T , a , b ;
  cin>>T;

  while( T-- )
  {
    cin>>a>>b;
    enterr(a , b );
  }

  cout<<win<<" "<<max;

  return 0;
}
