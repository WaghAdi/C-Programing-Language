// 32.Write a C program to count number of alphabates, spaces 
// and words in given string


#include<stdio.h>
void main()
{
    char str[100];
    int count=0,alphabates=0,spaces=0;
    int words=0;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is \n");
    while (str[i] != '\n')
    {
        while (str[i] == ' ')
        {
            spaces+=1;
            i++;
        }
        
        while (str[i]!=' ' && str[i]!='\n' )
        {
           alphabates+=1;
           i++;
           if (str[i] ==' ' || str[i] == '\n')
           {
              words+=1;
           }
           
        }
        
        



        
        
        
    }
    
    printf("Total white spaces count are %d \n",spaces);
    printf("Total alphabate  count are %d \n",alphabates);
    printf("Total words  count are %d",words);
    
}