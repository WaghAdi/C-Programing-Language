// 1.Write a C program to accept string with multiple spaces from 
// user and print as it is.

//*****************Solution****************

#include<stdio.h>
void main()
{
    char str[100];
    printf("Please Enter the string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str,sizeof(str),stdin);
    printf(str);
}