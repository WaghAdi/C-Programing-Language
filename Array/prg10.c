#include<stdio.h>
void main()
{
    int a[100],total,n,l,k,add_element;
    int sum=0;
    printf("Enter how many element you want to add \n");
    scanf("%d",&n);
    printf("Enter elements \n");
    for (int i = 0; i < n; i++)     
    {
        scanf("%d",&a[i]);
    }
    printf("Enter index after which you wanna add data");
    scanf("%d",&l);
    // k=l+1;
    for ( k=n-1; k >=l+1; k--)
    {
        a[k+1]=a[k];
       
    }
    printf("Enter element want to add \n",add_element);
    scanf("%d",&add_element);
    a[l+1]=add_element;
    printf("After add array is \n");
    
    for (int j = 0; j < n+1; j++)
    {
      printf("%d \t",a[j]);
    }
    
    
}