/*
Que 33: Write a C program to print all Perfect numbers between 1 to n.
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n, digit, sum, original;
    int current;
    int cube = 1;
    // sum = 0;

    // int i=1;

    printf("enter the number \n");
    scanf("%d", &n);
    original = n;
    for (int i=1;i<=n;i++)
    {
        sum=0;
        // current=i;
        original=i;
        for (int j=1;j<i;j++)
        {
               if(i%j == 0)
               {
                   sum+=j;
               }
        }
        if(sum == original)
        {
            
            printf(" The prefect numbers are %d \n",original);
        }
    }
}