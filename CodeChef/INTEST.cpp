/*
Name: INTEST
Level: Beginner
*/

#include<iostream>
#include<stdio.h>

int main()
{
    int num,k,t,flag = 0;
    
    scanf("%d %d",&num,&k);
    
    while(num--)
    {
        scanf("%d",&t);
        
        if(t % k == 0)
        {
            flag++;
        }
    }
    
    printf("%d",flag);
    return 0;
}
