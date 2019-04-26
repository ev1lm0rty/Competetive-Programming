/*
Description: DEPCHEF(codechef - beginner)
Made by: Shubham Arya
Start Date: 20/02/2019
End Date: 20/02/2019
*/

#include<iostream>
using namespace std;
int a[100] , d[100], arr[100];
int p = 0;


void attackanddefence(int N)
  {


        for( int i = 0 ; i < N ; i++)
          {
            cin >> a[i];  //entering attack values
          }

        for ( int i = 0 ; i < N ; i++ )
          {
            cin >> d[i]; //entering defence values
          }
    }

void final(int fax)
  {
      arr[p] = fax;
      p++;
    }

int check(int N)
  {
    int i = 0;
    int max = 0;
    int check = 0;

    if( a[N-1] + a[1] < d[0]) // checking for the first soldier
        {
          max = d[0];
          check++;
        }

    for ( i = 1 ; i < N-1 ; i++)  // checking for all the soldiers
      {
        if( a[i+1] + a[i-1] < d[i]) // updating the max defence value
          {
              if( d[i] > max)
                max = d[i];
                check++;
          }
      }

    if( a[0] + a[N-2] < d[N-1]) // checking for the last soldier
      {
        if ( d[N-1] > max)
              {
                max = d[N-1];
                check++;
              }
      }

      if(check == 0)
        max = -1;


        return max;

  }

void display()
  {
    for ( int i = 0 ; i < p ; i ++)
      {
        cout << arr[i]<< endl;
      }
  }

int main()
  {
    int T , N;
    int fax = 0;

    cin >> T; // Test cases

      while(T--)
        {
          cin >> N;
          attackanddefence(N); // enters the value of the attack and defence of each soldier
          fax = check(N); // checks the best shield to be won
          final(fax); //final output array

        }

      display(); //display the result
  }
