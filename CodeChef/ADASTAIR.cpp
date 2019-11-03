/*
* Description: ADASTAIR (codechef)
* Madeby: mrjoker05
* Start Date: 1/04/2019
* End Date:
*/

#include<iostream>
using namespace std;
int arr[10000],drr[10000];
int steps = 0;
int sum = 0;
int N , K;
int i = 0;

/******************************************************************************/

void rec()
{
  if(steps <= N)
      {
          if(sum <= K)
          {
            sum = sum + drr[i];
            i++;
          }

        else
          {
            steps++;
            drr[i] = drr[i] + K;
            rec();
          }
      }

}

/*****************************************************************************/

void calcss()
{

    for(int j = 0; j < N-1; j++)
    {
        drr[j] = arr[j] - arr[j-1]; // making the difference array
    }

  rec();
  cout << steps;

}

/****************************************************************************/

int main()
{
  int T;

  cin >> T;

  while(T--)
    {
      cin >> N >> K;

      for(int j = 0 ; j < N ; j++)
        {
          cin >> arr[j]; // array of heights
        }

      calcss();

    }
}
