/*
Que 2: Write a C program to print all natural numbers in reverse (from n to 1). -Using while loop

owner:Aditya Wagh
Batch:PPA9
*/

//Solution 
#include<stdio.h>

void main()
{
    int n;
    
    printf("enter the number : \n"); //taking user input
    scanf("%d",&n);
    while(1<=n)
    {
        printf("%d \n",n);
        n--;
    }
    //end of while


}