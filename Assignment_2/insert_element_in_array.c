// 10. Write a program in C to insert New value in the array 
// (sorted list )

#include<stdio.h>
void main()
{
    int a[100],total,n,l,k,add_element,user_data,temp;
    int sum=0;
    printf("Enter how many element you want to add \n");
    scanf("%d",&n);
    printf("Enter elements of sorted array \n");
    for (int i = 0; i < n; i++)     
    {
        scanf("%d",&a[i]);
    }
    printf("Enter data which you wanna to add ");
    scanf("%d",&user_data);


    // for getting index of elemnt before and after which want to add data
    for (int i = 0; i < n; i++)
    {  temp=i;
        if (a[i]>user_data)
        {
            break;
        }
        
    }
    l=temp-1;// Element after which you want to add data

   //For shifting position of an elements
    
    for ( k=n-1; k >=temp; k--)
    {
        a[k+1]=a[k];
       
    }
    
   //adding new element 
    a[l+1]=user_data;
    printf("After add array is \n");
    
    //after adding array
    for (int j = 0; j < n+1; j++)
    {
      printf("%d \t",a[j]);
    }
    
    
}