/*
oue 36:Write a C program to print fibonachi series upto n number
owner:Aditya Wagh
Batch:PPA9
*/

#include <stdio.h>
void main()
{
    int n;
    int fib1 = 0;
    int fib2 = 1;
    int fib3;
    printf("enter number \n");
    scanf("%d", &n);
    if (n == 1)
    { 
        printf("%d", fib1);
    }
    else if (n == 2)
    {
        printf("%d \t", fib1);
        printf("%d", fib2);
        // statement(s)
    }
    else if (n > 2)
    {
        printf("%d \t", fib1);
        printf("%d \t", fib2);
        for (int i = 3; i <= n; i++)
        {
            fib3=fib1+fib2;
            printf("%d \t",fib3);
            fib1=fib2;
            fib2=fib3;
        }
        
    }
    
}