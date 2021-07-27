// 17. Write a C Program to Find 2 Elements in the Array 
// such that Difference between them is Largest

#include <stdio.h>
void main()
{
    int a[100], total, n,min,max;
    int sum = 0;
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("The element which are having largesr diffrence are %d and %d",min,max);
    

    
}