// 11. Write a program in C to delete an element at desired 
// position from an array.


#include<stdio.h>
void main()
{
     int a[10] = {11, 15, 45, 78, 63},delete,count;
     int n=5;

     printf("enter element you want to delete \n");
     scanf("%d",&delete);
     printf("before deleting array is \n");
     for (int m = 0; m < n; m++)
     {
        printf("%d \t",a[m]);
     }
     for (int i = 0; i < n; i++)
     {  count=i;
        if (a[i] == delete)
        {
            break;
        }
        
     }
     for (int j = count; j < n; j++)
     {
        a[j]=a[j+1];
     }
     printf(" \nAfter deleting array is \n");
     for (int m = 0; m < n-1; m++)
     {
        printf("%d \t",a[m]);
     }
     
     
     
}