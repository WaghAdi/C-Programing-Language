// 3.Write a C program that return the positions of the 
// pallindrome element in array

#include <stdio.h>
void main()
{
    int a[100], total, n,temp,remainder,rev,original;
        printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The index of Palindrome numbers are as follows \n");

    for (int j = 0; j < n; j++)
    { 
        temp=a[j];
        original=a[j];
        rev=0;
        while (temp > 0)
        { 
            remainder=temp%10;
            rev=(rev*10)+remainder;
            temp=temp/10;
        }
        if (original == rev)
        {
            printf("%d \t",j);
            // printf("The number %d is palindrome",original);
        }
        
        
       
        
        
    }
   
}