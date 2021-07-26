/*
Que 24: Write a C program to find HCF (GCD) of two numbers
owner:Aditya Wagh
Batch:PPA9
*/
#include<stdio.h>
void main()
{
    int min,n1,n2,gcd;
    printf("enter first number");
    scanf("%d",&n1);
    printf("enter second number");
    scanf("%d",&n2);
    min=(n1<n2)?n1:n2;
    gcd=1;
   for(int i=1;i<=min;i++)
   {
       if (n1%i == 0 && n2%i == 0)
       {
           gcd=i;
       }
       
   }
   printf("the gcd od %d and %d is %d ",n1,n2,gcd);
}