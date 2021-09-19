// 25.Write a C program which accept two strings from user and 
// compare two strings. If both strings are equal then return 0 
// otherwise return difference between first mismatch character.


#include <stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    int i = 0;
    int j = 0;
    int flag = 0;
    int outerflag = 0;
    printf("Please Enter the first string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str1, sizeof(str1), stdin);
    printf("Please Enter the second string ");
    fgets(str2, sizeof(str2), stdin);
    

    while (str2[i] != '\n')
    {
       while (str1[j] != '\n')
       {
           if (str2[i] == str1[j])
           {
               flag=0;
               break;
           }
           j++;
       }
       if (flag==0)
       {
           outerflag=0;
       }
       else
       {
           outerflag=1;
           break;
       }
       i++;
       
        
    }
    if (outerflag==0)
    {
        printf("strings are anagram \n");
    }
    else
    {
        printf("strings are not anagram \n");

    }
    
}