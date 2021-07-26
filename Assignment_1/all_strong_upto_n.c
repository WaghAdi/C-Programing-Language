/*
Que 35: Write a C program to print all Strong numbers between 1 to n.
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n, digit, sum, original,current,fact;
   
    printf("enter the number \n");
    scanf("%d", &n);
    // original = n;
    for (int i = 1; i <= n; i++)
    {
       sum=0;
       current=i;
       original=i;
    
       while (current != 0)
       {   
       
           digit=current %10;
           fact=1;
           for (int j = 1; j <= digit; j++)
           {    
            
               fact=fact*j;
           }
            
           sum+=fact;
           current=current/10;
        
       }
    
       if (original == sum)
       {
          printf("%d  \n",original);
       }
       
       
    }
    
}