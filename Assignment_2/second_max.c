// 13. Write a program in C to find the second largest 
// element in an array.


#include<stdio.h>
void main()
{
    int a[10]={4,42,83,53,24,72,81,16,91,68};
    int max1,max2;
    if (a[0]>a[1])
    {
        max1=a[0];
        max2=a[1];
    }
    else
    {
         max1=a[1];
        max2=a[0];
    }
    
    for (int i = 2; i < 10; i++)
    {
        if (a[i] > max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if (a[i]<max2)
        {
            max1=max1;
            max2=max2;
        }
        else if (a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
            max1=max1;
        }
        
        
    }
    printf("first max number is %d \n",max1);
    printf("second max number is %d \n",max2);
    
}