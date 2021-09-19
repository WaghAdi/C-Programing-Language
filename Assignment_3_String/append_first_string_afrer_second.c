// 23.Write a C program which accept two strings from user and 
// append second string after first string.
// Eg:
// Input String: India Country
// Output String: IndiaCountry


#include <stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    printf("Please Enter the first string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str1, sizeof(str1), stdin);
    printf("Please Enter the second string ");
    fgets(str2, sizeof(str2), stdin);
    // printf(str);
    int i = 0;
    int j = 0;
    int k = 0;
    while (str1[i] != '\n')
    {

        i++;
    }
    while (str2[j] != '\n')
    {
        str1[i] = str2[j];
        i++;
         j++;
    }
    str1[i]='\0';
    printf("after concatination string is \n");
    while (str1[k] != '\0')
    {
        printf("%c",str1[k]);
        k++;
    }
    
}