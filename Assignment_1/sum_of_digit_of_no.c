/*
Que 14 :Write a C program to calculate sum of digits of a number.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 

#include<stdio.h>
void main()
{
   int n,temp;
   int count=0;
   //initialization
   printf("enter the number : \n");
   scanf("%d",&n);
   while(n!=0)
   {
      temp=n%10;
      count=count+temp;
      n=n/10;

     
   }
    //end of while
  
   printf("sum of digit is %d",count);
  
   



}