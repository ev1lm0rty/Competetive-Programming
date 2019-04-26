/*
* Description: SUMTRIAN (codechef)
* Made by: mr_joker
* Start Date: 01/04/2019
* End Date:
*/

#include<iostream>
using namespace std;

void go(int n)
{
  int sum = 0;
  int t = 0;
  for ( int i = 1 ; i <= n ; i++)
    {
      for (int j = 1 ; j <= i ; j++)
        {
          cin >> t;
          sum = sum+t;
        }
    }

  cout<< sum<< endl;
}
int main()
{
  int T;
  int n;
  cin >> T;

  while(T--)
    {
      cin >> n;
      go(n);
    }
}
