// 4.Write a C program to sort first half of array in 
// ascending order and second half of array in 
// descending order

#include <stdio.h>
void main()
{
    int a[100], total, n,temp,even_sort,odd_sort,first_half,second_half;
        printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    first_half=n/2;
    // printf("%d",first_half);
    second_half=n-first_half;
    
    for (int i = 0; i < first_half-1 ; i++)
    {
        for (int j=i+1; j < first_half ; j++)
        {
            if (a[i] > a[j]) //condition for swapping
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp; //swapping
            }
        }
    }
    for (int d = first_half; d < n-1; d++)
    {
        for (int j=d+1; j <n ; j++)
        {
            if (a[d] < a[j]) //condition for swapping
            {
                temp = a[j];
                a[j] = a[d];
                a[d] = temp; //swapping
            }
        }
    }
    printf("\nafter sorting array is \n");
    for (int k = 0; k < n ; k++)
    {
        printf("%d \t", a[k]);
    }
   
}