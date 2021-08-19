// 21. Write C Program to Find if a given Integer X appears 
// more than N/2 times in a Sorted Array of N Integers

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
    
     printf("element which appers more than n/2 times is \n");
    for (int k = 0; k < n; k++)
    {  
       if (frequency[k] > (n/2) )
       {
          printf("%d \t",a[k]);
          break;
       }
       
    }
    
}