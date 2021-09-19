// 11.Write a C program which accepts a string from user which 
// contains a characters from ‘b’ to ‘y’.
// Eg:
// Input String: mn jn kn kazfd
// Output String: mn jn kn 

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
     if (str[i] >=98 && str[i]<=121)
     {
         printf("%c",str[i]);
     }
     
        
        i++;
    }
    
    
}