#include<stdio.h>
void main()
{
    char str[100];
    int count=0;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0,j=0;
    printf("Output is ");
    while (str[i] != '\n')
    {
       if (str[i] == ' ')
       {
           str[i]='$';
       }
       i++;
       
       
    }
    
    while (str[j] != '\n')
    {
      printf("%c",str)
    }
    
    
}