// Oue1.Write a C program to find the sum of all the elements 
// of an array
// Name:-- Wagh Aditya Shivnath


#include<stdio.h>
void main()
{
    int a[100],total,n;
    int sum=0;
    printf("Enter how many element you want to add \n");
    scanf("%d",&n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)     
    {
        scanf("%d",&a[i]);
    }
   
    for (int j = 0; j < n; j++)
    {
      sum+=a[j];
    }
    printf("The sum of Element is %d",sum);
    
}