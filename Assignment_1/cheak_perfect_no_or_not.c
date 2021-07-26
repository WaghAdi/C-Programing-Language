/*
oue 32:Write a C program to check whether a number is Perfect number or not
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n, original, sum;
    sum = 0;

    printf("enter the number \n");
    scanf("%d", &n);
    original = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == original)
    {
        printf("%d is perfect number \n",original);
    }
    else
    {
        printf("%d is not perfect number \n",original);
    }
    
}