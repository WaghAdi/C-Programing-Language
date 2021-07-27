// 12. Write a program in C to find the maximum number from given array/ 

#include <stdio.h>
void main()
{
    int a[10] = {11, 15, 45, 78, 63};
    int max, i;
    int flag = 0;
    max = a[0];
    for (i = 0; i < 5; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("maximum element is %d ", max);
}