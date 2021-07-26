/*
Que 20: . Write a C program to print all ASCII character with their values.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 

#include<stdio.h>
void main()
{
    for (int i=0;i<255;i++)
    {
        printf("character is %c \t",i);
        printf(" ASCII value is %d \n",i);
    }
}