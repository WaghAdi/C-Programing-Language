// 6.Write a C program to reverse a given string as below.C : Assignment on String Typing is no substitute for thinking
// TECHNORBIT INFOSYSTEMS Amol Rahane : 9545535857
// Eg:
// Input String: India is my country
// Output String: aidnI si ym yrtnuo

#include <stdio.h>
void main()
{
    char str[100];
    int firstChar, lastChar, j;
    printf("Please Enter the string ");

    fgets(str, sizeof(str), stdin);
    // printf(str);
    int i = 0;
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;
    printf("Output is\n");
    while (str[i] != '\n')
    {
        fib1 = 0;
        fib2 = 1;
        fib3 = 0;
        printf("%d \t", fib1);
        printf("%d \t", fib2);
        while (fib3 <= str[i])
        {
            fib3 = fib1 + fib2;
            fib1 = fib2;
            if (fib3 < str[i])
            {
                printf("%d \t", fib3);
            }

            fib2 = fib3;
        }
        i++;

        printf("\n");
    }
}