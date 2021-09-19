// 8.Write a program which accept sentence from user and print 
// number of words from that sentence.


#include<stdio.h>
void main()
{
    char str[100];
    int count=0;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is ");
    while (str[i] != '\n')
    {
        while(str[i] == ' ')
        {
            i++;
        }
        while(str[i] != '\n' && str[i] !=' ')
        {
          i++;
          if (str[i] == '\n' || str[i]==' ' )
          {
               count+=1;
          }
          
         
        }
       
    }
    
    printf("Total Words are %d",count);
    
}