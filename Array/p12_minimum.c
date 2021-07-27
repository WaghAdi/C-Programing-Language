// 12. Write a program in C to find the minimum element in an array


#include <stdio.h>
void main()
{
    int a[10] = {11, 15, 45, 78, 63};
    int min, i;

    min = a[0];

    for (i = 0; i < 5; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("minium element is %d ", min);
}