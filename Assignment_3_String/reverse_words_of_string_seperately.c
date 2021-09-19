// 6.Write a C program to reverse a given string as below.C : Assignment on String Typing is no substitute for thinkin
// Eg:
// Input String: India is my country
// Output String: aidnI si ym yrtnuo


#include<stdio.h>
void main()
{
    char str[100];
    int firstChar,lastChar,j;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is\n");
    while (str[i] != '\n')
    {
       
        firstChar=i;

        while(str[i] != '\n' && str[i] !=' ')
        {
       
          i++;
        }
        lastChar=i-1;

        //printing reverse
       for (j = lastChar; j >= firstChar; j--)
       {
           printf("%c",str[j]);
       }

       //for printing blank spaces
       while (str[i] == ' ')
       {
           printf("%c",str[i]);
           i++;
       }
       
       
    }
    
}