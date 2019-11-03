/*
* Description: See BITOBYT (codechef)
* Made by: mrjoker05
* Start Date: 1/04/2019
* End Date: 1/04/2019
*/

#include<iostream>
#include<cmath>

using namespace std;

void counts(int n)
{
  long bi,by,nb;
  bi = 1;
  by = 0;
  nb = 0;

  long a = n/26;
  bi = pow(2,a);

  n = n%26;

  if( n < 2)
    {

    }

  else if( n >= 2 && n < 10 )
    {
      nb = bi;
      bi=0;


    }

  else if(n>=10)
    {
      by=bi;
      bi=0;

    }

  cout<<bi<<" "<<nb<<" "<<by<<endl;
}

int main()
{
  int T,n;
  cin >> T;



  while(T--)
    {
      cin >> n;
      counts(n-1);

    }

}
