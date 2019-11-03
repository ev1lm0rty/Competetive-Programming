/*
Description:HMAPPY2(codechef - beginner)
Made by: mrjoker05
Start Date: 20/02/2019
End Date:
*/

#include<iostream>
using namespace std;
int n,b,a,k;
int arr[100000000];
int p = 0;

void check()
  {
    int appy = 0;
    int chef = 0;

    for(int i = 1 ; i <= n ; i++ )
      {
        if ( i%a == 0 && i%b != 0)
          appy++;
        else if (i%b == 0 && i%a != 0)
        chef++;
      }

    if(appy + chef >= k)
      {
        arr[p] = 1;
          p++;
      }

    else
      {
        arr[p] = 0;
        p++;
      }

  }

void display()
    {
      for( int i = 0 ; i <= p ; i ++)
        {
          if ( arr[i] == 1)
            cout<<"Win"<<endl;
          else
            cout<<"Lose"<<endl;
        }
    }
int main()
  {
    int T;
    cin >> T;

    while( T-- )
      {
        cin >> n >> a >> b >> k;
        check();
      }

    display();
  }
