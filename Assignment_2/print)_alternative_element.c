// 16. Write a C Program to Print the Alternate Elements
// in an Array

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
    
    printf("Element at positive index are \n");
    for (int j = 0; j < n; j = j + 2)
    {
        printf("%d \t", a[j]);
    }
    printf("\n");
    printf("Element at negative index are \n");
   
    for (int j = 1; j < n; j = j + 2)
    {
        printf("%d \t", a[j]);
    }
}