/*
Que 23:Write a C program to calculate factorial of a number.
owner:Aditya Wagh
Batch:PPA9
*/
#include<stdio.h>
void main()
{
    int n,fact;
    printf("enter the number \n");
    scanf("%d",&n);
    fact=1;
    for (int i = 1; i <=n; i++)
    {
       fact=fact*i;
    }
    printf("the facrorial of %d is %d \n",n,fact);
    
   
    
    
}