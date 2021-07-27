// 19. Write a C program to store squares of the elements 
// in the same array

#include <stdio.h>
void main()
{
    int a[100], total, n;
    int sum = 0;
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Original array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }

    for (int j = 0; j < n; j++)
    {
        a[j] = a[j] * a[j];
    }
    printf("\n after square array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}