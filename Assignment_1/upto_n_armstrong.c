/*
Que : Write a C program to print all natural numbers from 1 to n. - using while Loop 
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n, digit, sum, original;
    int current;
    // int i=1;

    printf("enter the number \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        original = i;
        current=i;
        while (current != 0)
        {
            digit = current % 10;
            sum = sum + digit * digit * digit;
            current = current / 10;
        }
        if (original == sum)
        {
            printf("the number %d is armstrong \n",original);
            // break;
        }
        // else
        // {
        //     printf("the number %d is not armstrong \n", i);
        // }
    }
}