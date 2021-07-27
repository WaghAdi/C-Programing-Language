// 15. Write a C Program to Check Array bounds while 
// Inputing Elements into the Array

#include <stdio.h>
void main()
{
    int a[100], n;
    int sum = 0;
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    if (n > (sizeof(a) / sizeof(int)))
    {
        printf("Array index out of bound");
    }
    else
    {
        printf("Enter elements \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Element are as follows \n");
         for (int j = 0; j < n;  j++)
        {
            printf("%d \t", a[j]);
        }
        
       
    }

}