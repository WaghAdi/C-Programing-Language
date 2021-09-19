// 25.Write a C program which accept two strings from user and 
// compare two strings. If both strings are equal then return 0 
// otherwise return difference between first mismatch character.


#include <stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    int i = 0;
    int flag = 0;
    printf("Please Enter the first string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str1, sizeof(str1), stdin);
    printf("Please Enter the second string ");
    fgets(str2, sizeof(str2), stdin);
    

    while (str1[i] != '\n')
    {
        if (str1[i] == str2[i])
        {
            i++;
        }

        else
        {   flag=1;
            printf("character at %d index are %c and %c which are diffrent",i,str1[i],str2[i]);
            break;
        }
    }
    if (flag==0)
    {
        printf("strings are equal \n");
    }
    
}