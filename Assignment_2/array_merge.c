#include <stdio.h>
void main()
{
    int a1[30], a2[30], b[100], n1, n2, k, l;
    printf("how many element want you add in first array \n");
    scanf("%d", &n1);
    printf("enter element");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("how many element want you add in second array\n");
    scanf("%d", &n2);
    printf("enter element");
    for (int j = 0; j < n2; j++)
    {
        scanf("%d", &a2[j]);
    }
    printf("merging array \n");
    for ( k = 0; k < n1; k++)
    {
        b[k] = a1[k];
    }
    // printf("after first array k is %d \n",k);
    for (int l = 0; l < n2; l++)
    {
        b[k] = a2[l];
        k++;
    }
    printf("after merging array is\n");
    for (int m = 0; m < n1 + n2; m++)
    {
        printf("%d \t", b[m]);
    }
}