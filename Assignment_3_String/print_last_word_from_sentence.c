// 15.Write a C program which accept sentence from user and 
// print last word from that sentence.
// Eg:
// Input String: India is my country
// Output String: country


#include <stdio.h>
void main()
{
    char str[100];
    printf("Please Enter the string ");

    fgets(str, sizeof(str), stdin);
    // printf(str);
    int i = 0;
    int firstChar;
    int lastChar;
    printf("Output is ");
    while (str[i] != '\n')
    {
        while (str[i] == ' ')
        {
            i++;
        }
       firstChar=i;
        while (str[i] != '\n' && str[i] != ' ')
        {
            lastChar=i;
            i++;
        }
        if (str[i] == '\n')
        {
            for (int  j = firstChar; j <= lastChar; j++)
            {
                printf("%c",str[j]);
            }
            
        }
        
    }

    
}