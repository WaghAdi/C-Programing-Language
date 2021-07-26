/*
Que 15 : Write a C program to calculate product of digits of a number.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 

#include<stdio.h>
void main()
{
   int n,temp;
   int count=1;
   //initialization
   
   printf("enter the number : \n");
   scanf("%d",&n);
   //conditon if we enter only zero
   if (n==0)
   {
     count=0;
   }
   while(n!=0)
   {
      temp=n%10;
      count=count*temp;
      n=n/10;

     
   }
    //end of while
   
   printf("product of digit is %d",count);
  
   



}