/*
Que 29:  Write a C program to find all prime factors of a numbers
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);
    printf("factors are  \n");
    int flag;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            int flag = 0;
            for (int j = 2; j <= i - 1; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("the prime factor are  %d \n", i);
            }
        }
    }
}