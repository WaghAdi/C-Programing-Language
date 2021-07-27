#include <stdio.h>
void main()
{
    int a[10] = {1, 2, 9, 6, 8, 4}, n1 = 6;
    int b[10] = {3, 4, 9}, n2 = 3;
    int inter[20], k = 0;
    printf("Intersection is  \n");
    for (int i = 0; i < n1; i++)
    {
        int flag = 0;
        for (int j = 0; i < n2; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            inter[k]=a[i];
            k++;
            // printf(" %d \n", a[i]);
        }
    }
    for (int  l = 0; l < k; l++)
    {
        printf("%d \t",inter[l]);
    }
    
}