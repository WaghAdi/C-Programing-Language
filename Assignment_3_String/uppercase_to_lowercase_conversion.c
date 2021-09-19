// 17.Write a C program to convert the string from upper case
// to lower cas

#include <stdio.h>
void main()
{
    char str[100];
    int count = 0;
    printf("Please Enter the string ");

    fgets(str, sizeof(str), stdin);
    // printf(str);
    int i = 0;
    int j = 0;
    printf("Output is \n");
    while (str[i] != '\n')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
    printf(str);
}