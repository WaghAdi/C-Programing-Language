/*
Que 22 :Write a C program to find all factors of a number.
owner:Aditya Wagh
Batch:PPA9
*/
#include<stdio.h>
void main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("factors are  \n");
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf("%d \n",i);
        }
        
    }
    
    
}