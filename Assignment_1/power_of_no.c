/*
Que 21:Write a C program to find power of a number using 
for loop
owner:Aditya Wagh
Batch:PPA9
*/
#include<stdio.h>
void main()
{
    int original_number,power,base,sum;
    printf("enter the base\n");
    scanf("%d",&base);
    printf("enter the power \n");
    scanf("%d",&power);
    original_number=base;
    sum=1;
    for (int i = 1; i <= power; i++)
    {
        sum=sum*original_number;
    }
    printf("the %d raise to %d is %d",base,power,sum);
    
    
}