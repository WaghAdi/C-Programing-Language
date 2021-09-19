// 4.Write a C program to accept string and print it in the reverse 
// order.

#include<stdio.h>
void main()
{
    char str[100];
    int firstChar,lastChar,j;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    
    int i=0;
    firstChar=0;
    while (str[i] != '\n')
    {   lastChar=i;
        i++;
    }
   
    
 printf("Reverse String is \n");
    for (j = lastChar; j >= firstChar; j--)
    {   
       
       printf("%c",str[j]);
    }
    
    
}