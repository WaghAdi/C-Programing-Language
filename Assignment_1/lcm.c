/*
Que 25: Write a C program to find LCM of two number.
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int max, n1, n2, lcm;
    printf("enter first number");
    scanf("%d", &n1);
    printf("enter second number");
    scanf("%d", &n2);
    max = (n1 < n2) ? n2 : n1;
    int i = max;
    while (1)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            printf("the lcm od %d and %d is %d ", n1, n2, i);
            break;
        }
        i++;
    }
}