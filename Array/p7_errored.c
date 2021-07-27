#include <stdio.h>
void main()
{
    int a[100], total, n;
    int sum = 0;
    int b[100];
    printf("Enter how many element you want to add \n");
    scanf("%d", &n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int odd = 0;
    int even = n;
    printf(" odd position %d \n",odd);
    for (int j = 0; j < n; j++)
    {
        if (a[j] % 2 == 0)
        {
            b[even] = a[j];
            even-=1;
        }
        else
        {
            b[odd] = a[j];
            odd+=1;
        }
    }
    printf("After seprating array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",b[i]);
    }
    
}