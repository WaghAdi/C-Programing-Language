// 9.Write a C program to replace Good names in mail.

#include<stdio.h>
void main()
{
    char str[100];
    char given_str[100]="Hello GoodName";
    int count=0;
    printf("Please Enter the string ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    int first_char=6;

    //for copying element
    while (str[i] != '\n')
    {
        given_str[first_char]=str[i];
        i++,first_char++;
    }
    int lastchar=i-1;
    int j=0;

    //for printing output
    while (given_str[j] != '\0')
    {
        printf("%c",given_str[j]);
        if (given_str[j]==str[lastchar])
        {
            break;
        }
        j++;
        
    }
    
    
}