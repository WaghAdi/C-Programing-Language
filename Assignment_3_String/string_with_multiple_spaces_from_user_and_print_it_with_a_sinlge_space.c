// 2.Write a C program to accept string with multiple spaces from  user and print it with a sinlge space as
// a delimiter.



#include<stdio.h>
void main()
{
    char str[100];
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is\n");
    while (str[i] != '\0')
    {
        while(str[i] == ' ')
        {
            i++;
        }
        while(str[i] != '\0' && str[i] !=' ')
        {
          printf("%c",str[i]);
          i++;
        }
        printf("%c",str[i]);
        i++;
    }
    
}