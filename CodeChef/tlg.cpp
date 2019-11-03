/* 
Name: TLG
Level: Beginner
Status: Running but not accepted by online chef
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int rounds,s1,s2;
    cin >> rounds;
    int arr[rounds];
    int diff,winner;
    
    for(int i = 0 ; i < rounds ;i++)
    {
        cin >> s1 >> s2;
        diff = s1 - s2;
        arr[i] = diff;
    }
    
    int max = arr[0];
    
    for(int i = 0 ; i < rounds ; i++)
    {
        if(arr[i] < 0)
            {
                
                arr[i] = arr[i] * -1;
                
                if ( arr[i] >= max)
                    {
                        max = arr[i];
                        winner = 2;
            
                    }
               
            }
        
        else
            {
                 if ( arr[i] >= max)
                    {
                        max = arr[i];
                        winner = 1;
            
                    }
            }
    }
    
    
    cout << winner<<" "<< max;
    return 0;
}
