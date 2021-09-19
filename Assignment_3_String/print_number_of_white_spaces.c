// 13.Write a C program which accept sentence from user and 
// print number of white spaces from that
// sentence.
// Eg:
// Input String: India is my country
// Output: 3


#include<stdio.h>
void main()
{
    char str[100];
    int count=0;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is \n");
    while (str[i] != '\n')
    {
        if (str[i] == ' ')
        {
            count+=1;
        }
        
       i++;
    }
    
    printf("Total white spaces count are %d",count);
    
}