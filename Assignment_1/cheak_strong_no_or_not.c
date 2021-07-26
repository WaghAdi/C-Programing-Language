/*
oue 34: Write a C program to check whether a number is Strong number or not.
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n, original, sum,digit;
    sum = 0;
    int fact=1;

    printf("enter the number \n");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        digit=n%10;
        fact=1;
        for (int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum+=fact;
        n=n/10;
    }
    if (original== sum)
    {
        printf("number %d is strong \n",original);
    }
    else
    {
        printf("number %d is not strong \n",original);

    }
    
    
}