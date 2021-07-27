#include <stdio.h>
void main()
{
    int a[10] = {4, 42, 83, 53, 24, 72, 81, 16, 91, 68};
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
        for (int j = 0; j <=n - 1; j++)
        {
            if (a[j] > a[j + 1]) //condition for swapping
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp; //swapping
            }
        }
    }
    printf("\n after sorting array is \n");
    for (int k = 0; k < n; k++)
    {
        printf("%d \t",a[k]);
    }
}