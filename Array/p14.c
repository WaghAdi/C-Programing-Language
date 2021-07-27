// 14. Write a C Program to Find the Number of Elements 
// in an Array

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
   
    printf("The total element in array are \n");
    printf("%d",sizeof(a)/sizeof(int));
    
}