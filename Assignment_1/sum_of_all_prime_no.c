/*
Que 28:  Write a C program to find sum of all prime numbers 
between 1 to n.
owner:Aditya Wagh
Batch:PPA9
*/


//Solution 


#include<stdio.h>
void main()
{ int n;
int total=0;
int flag=0;
printf("enter the number \n");
scanf("%d",&n);

for (int i = 1; i <=n; i++)
{
    flag=0;
    for (int j = 2; j < i-1; j++)
    {
       if (i%j == 0)
       {
           flag=1;
           break;
       }
       
    }
    if (flag == 0)
    { 
        total=total+i;
    }
    
    
    
}
printf("the total is %d ",total);




}