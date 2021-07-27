// 2.An array consist of Integers. Write a C program to 
// count the number of elements less than, greater than 
// and equal to zero.


#include <stdio.h>
void main()
{
    int a[100], total, n;
    int pcount = 0;
    int ncount = 0;
    int zcount = 0;
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (a[j] > 0)   
        {
           pcount+=1;
        }
        else if (a[j] < 0)
        {
            ncount+=1;
        }
        else
        {
            zcount+=1;
        }
        
        
    }
    printf("The Total positive numbers are %d \n",pcount);
    printf("The Total negative numbers are %d \n",ncount);
    printf("The Total zero numbers are %d \n",zcount);
}