// 21.Write a program which accept string from user and copy 
// first N charaters into some destination string.
// Eg:
// Input String: India is my country
// Input of N: 8
// Output String: India is


#include <stdio.h>
void main()
{
    char str[100];
    char str2[100];
    int count = 0,choice;
    int lastChar,firstChar;
    printf("Please Enter the string ");

    fgets(str, sizeof(str), stdin);
    printf("Please Enter how many characyer you want to copy \n ");
    scanf("%d",&choice);
    // printf(str);
    int i = 0;
    int j = 0;
   
    printf("Output is \n");
    while (str[i] != '\n')
    {  str2[i]=str[i];
        count+=1;
         
       if (count == choice)
       {  
        
           break;
       }
       

        i++;
    }
   
    for (int  j = 0; j < choice; j++)
    {
       
        printf("%c",str2[j]);
    }

    
       
}