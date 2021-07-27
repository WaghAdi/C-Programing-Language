// 3.Write a C program that return the positions of the
// pallindrome element in array

#include <stdio.h>
void main()
{
    int a[100], total, n, temp, remainder, rev, original;
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("The position of Palindrome numbers are as follows \n");

    for (int j = 0; j < n; j++)
    {
        if (a[j] % 2 == 0)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[k] % 2 != 0)
                {
                    temp = a[k];
                    a[k] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
    printf("After seprating \n");
    for (int g = 0; g < n; g++)
    {
        printf("%d \t", a[g]);
    }
}