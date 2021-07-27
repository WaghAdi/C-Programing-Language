// 5.Write a C program to copy the elements of one array 
// into another arra

#include <stdio.h>
void main()
{
    int a[100], total, n,b[100],n1=100;
        printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int  j = 0; j < n; j++)
    {
       b[j]=a[j];
    }
    for (int  k = 0; k < n; k++)
    {
        printf("%d \t",b[k]);
    }
    
    
   
   
}