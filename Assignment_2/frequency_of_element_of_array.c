// 8.Write a program in C to count the frequency of each 
// element of an array.

#include <stdio.h>
void main()
{
    int a[100], count, n;
    int sum = 0;
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    int frequency[100];
    printf("Enter elements \n");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count += 1;
            }
        }
        frequency[i] = count;
    }
    printf("The  Element is \n");
    for (int k = 0; k < n; k++)
    {
        printf("%d \t",a[k]);
    }
     printf("Frequency of elements are \n");
    for (int k = 0; k < n; k++)
    {  
        printf("%d \t",frequency[k]);
    }
    
}