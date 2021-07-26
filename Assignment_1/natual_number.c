/*
Que 1: Write a C program to print all natural numbers from 1 to n. - using while Loop 
owner:Aditya Wagh
Batch:PPA9
*/

//Solution 
#include<stdio.h>
void main()
{
    int n;
    int i=1; //initialization
    printf("enter the number : \n"); //taking user input
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d \n",i);
        i++;
    }
    //end of while


}