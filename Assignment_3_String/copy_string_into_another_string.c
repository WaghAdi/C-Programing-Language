// 20.Write a C program which accept string from user and copy 
// that string into some another string

#include <stdio.h>
void main()
{
    char str[100];
    char str2[100];
    int count = 0,choice;
    int lastChar;
    printf("Please Enter the string ");

    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    int j = 0;
   
    printf("Output is \n");
    while (str[i] != '\n')
    {
       str2[i]=str[i];
       i++;
    }
    str2[i]='\0';  
    // printf(str2);
    while (str2[j] != '\0')
    {
        printf("%c",str2[j]);
        j++;
    }
    
    
    
       
}