// 3.Write a C program to print count of number characters in  given string.

#include<stdio.h>
void main()
{
    char str[100];
    printf("Please Enter the string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    int count=0;
    while (str[i] != '\n')
    {
        count=count+1;
        
        i++;
    }
    printf("Character count is %d",count);
    
}