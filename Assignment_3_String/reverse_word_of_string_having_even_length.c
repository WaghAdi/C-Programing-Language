// 30.Write a C program which accept string from user and 
// reverse words from that string which are of even length.

#include<stdio.h>
void main()
{
    char str[100];
    int count=0,firstChar,lastChar;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is \n");
    while (str[i] != '\n')
    {
        while (str[i] == ' ')
        {
            printf("%c",str[i]);
            i++;
        }
        firstChar=i;
        count=0;
        while (str[i]!=' ' && str[i]!='\n' )
        {
           count+=1;
           i++;
        }
        lastChar=i-1;
        if (count%2 == 0)
        {
            for (int j = firstChar; j <= lastChar; j++)
            {
                printf("%c",str[j]);
            }
        }
        else
        {
            for (int j = lastChar; j >= firstChar; j--)
            {
                printf("%c",str[j]);
            }

        }
        



        
        
        
    }
    
    // printf("Total white spaces count are %d",count);
    
}