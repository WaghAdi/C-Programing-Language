/*
Que 261:Write a C program to check whether a number is 
Prime number or not.
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n;
    int flag = 0;
    printf("enter the number \n");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("the number %d is prime", n);
    }
    else
    {
        printf("the number %d is not prime", n);
    }
}