// 5.Write a C program to count count of number of vowels and  number of consonants in the given string


#include <stdio.h>
void main()
{
    char str[50];
    int vCount = 0, cCount = 0, i = 0;
    printf("Enter string \n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\n')
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            if (str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85 || str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
            {
                vCount += 1;
            }
            else
            {
                cCount += 1;
            }
        }
        i++;
    }
    printf("Consonent %d \n", cCount);
    printf("vowel %d", vCount);
}