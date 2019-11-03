/* 
Name: FLOW006
Level : Beginner
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T , num ,ld;
    int sum = 0;
    
    cin >> T;
    
    while(T--)
    {
        cin >> num;
        
       while(num != 0)
       {
           ld = num % 10;
           sum += ld;
           num = num/10;
       }
        cout << sum<<endl;
        sum = 0;
    }
    return 0;
}
