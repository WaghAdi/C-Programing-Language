#include <stdio.h>
void main()
{
    int a[10] = {95,42,26,11,96,55,37,18,52,71};
    int n = 10;
    int temp;
    printf("before sorting array is \n");
    for (int k = 0; k < n; k++)
    {
        printf("%d \t",a[k]);
    }

    //logic for sorting 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j=i+1; j < n ; j++)
        {
            if (a[i] > a[j]) //condition for swapping
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp; //swapping
            }
        }
    }
    printf("\nafter sorting array is \n");
    for (int k = 0; k < n ; k++)
    {
        printf("%d \t", a[k]);
    }
}