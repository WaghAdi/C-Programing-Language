// 26.Write a C program which accept two strings from user and 
// compare only first N characters of two strings. If both strings 
// are equal till first N characters then return 0 otherwise return 
// difference between first mismatch character.



#include <stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    int i = 0;
    int flag = 0;
    int count = 0;
    int choice = 0;
    printf("Please Enter the first string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str1, sizeof(str1), stdin);
    printf("Please Enter the second string ");
    fgets(str2, sizeof(str2), stdin);
    printf("Please Enter the how many character want to compare ");
    scanf("%d", &choice);
    

    while (str1[i] != '\n')
    {   count+=1;
    if (count == choice)
        {
            // i++;
            break;
        }
    
        if (str1[i] == str2[i])
        {
            i++;
        }

        else
        {   flag=1;
            // printf("character at %d index are %c and %c which are diffrent",i,str1[i],str2[i]);
            break;
        }
    }
    if (flag==0)
    {
        printf("strings are equal \n");
    }
    else if (flag==1)
    {
        /* code */
         printf("character at %d index are %c and %c which are diffrent",i,str1[i],str2[i]);
    }
    
   
    
}