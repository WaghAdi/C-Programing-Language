// 24. Write a C program to find the maximum sum of a 
// subsequent numbers in given array

#include <stdio.h>
void main()
{
    int a[100], total, n,sum;
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
   
    sum=a[0]+a[1];
    for (int i = 1; i < n; i++)
    {
       if ((a[i+1]+a[i]) > sum)
       {
           sum=a[i+1]+a[i];
       }
       
    }
    printf("The maximum sum of two consegative elements is %d \n",sum);
    

    
}