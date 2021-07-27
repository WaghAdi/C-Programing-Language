#include <stdio.h>
void main()
{
    int a[10] = {1, 2, 9, 6, 8, 4}, n1 = 6;
    int b[10] = {3, 4, 9}, n2 = 3;
    int union_set [20], k = 0,n3=20;
    printf("Intersection is  \n");
    for (int i = 0; i < n1; i++)
    {
       i=k;
       union_set[i]=a[i];
       k++;
    }
    for (int  j = 0; j < n2; j++)
    {  int flag=0;
       for (int  l = 0; l < n3; l++)
       {
           if (b[j] == union_set[l] )
           {
              flag=1;
              break;
           }
           
       }
       if (flag==0)
       {
        //    k++;
           union_set[k]=b[j];
       }
       
       
    }
    for (int  m = 0; m < k; k++)
    {
       printf("%d",union_set[m]);
    }
    
    
    
    
}