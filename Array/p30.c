#include <stdio.h>
void main()
{
    int a[10] = {1, 2, 9, 6, 8, 4}, n1 = 6,i;
    int b[10] = {3, 4, 9}, n2 = 3;
    int inter[20], k = 0, n3 = 20, flag;
    printf("Union is  \n");
    for ( i = 0; i < n1; i++)
    {
        // printf("\n Curretnt element is %d \n", b[i]);
        flag = 0;
        for (int j = 0; i < n2; j++)
        {
            if (a[i] == b[j])
            {
                // printf("Cheking Condition");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            // inter[k]=a[i];
            // k++;
            printf(" union is  %d \t", a[i]);
        }
    }
    // for (int  l = 0; l < n1; l++)
    // {
    // printf("%d \t",inter[l]);
    // inter[k]=a[l];
    // k++;

    // }
    // for (int m=0 ;m<n3 ;m++)
    // {
    //        printf("%d \t",inter[m]);
    // }
}