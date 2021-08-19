#include<stdio.h>
void main()
{
    int a[100];
    int total;
    printf("how many element want to add \n");
    scanf("%d",&total);
    printf("enter elements \n");
    for (int i = 0; i < total; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element in arrar are as follows\n");
    for (int j = 0; j < total; j++)
    {
        printf("%d \t",a[j]);
    }
    
}