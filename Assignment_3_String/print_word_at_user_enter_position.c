// 16.Write a C program which accept sentence from user and
// position from user and print the word at
// that position.
// Eg:
// Input String: India is my country
// Input Position: 3
// Output String: my

#include <stdio.h>
void main()
{
    char str[100];
    int count = 0, choice, firstChar, lastChar;
    printf("Please Enter the string ");

    fgets(str, sizeof(str), stdin);
    // printf(str);
    printf("Please Enter position which no want to print ");
    scanf("%d", &choice);
    int i = 0;
    int flag = 0;
    int charCount;
    printf("Output is ");
    while (str[i] != '\n')
    {
        while (str[i] == ' ')
        {
            i++;
        }
        firstChar = i;

        while (str[i] != '\n' && str[i] != ' ')
        {

            i++;
            if (str[i] == '\n' || str[i] == ' ')
            {
                count += 1;
                if (count == choice)
                {
                    lastChar = i - 1;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            for (int j = firstChar; j <= lastChar; j++)
            {
                printf("%c", str[j]);
            }
            break;
        }
    }
}