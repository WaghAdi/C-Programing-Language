/*
Que 16 : Write a C program to enter a number and print its reverse.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 

#include<stdio.h>
void main()
{
   int n,rev_no=0;
   int remainder;
   //initialization
   printf("enter the number : \n");
   scanf("%d",&n);
   while(n!=0)
   {  remainder=n%10;
      rev_no=(rev_no*10)+remainder;//3
      n=n/10;

     
   }
   //end of while
   printf("reverse number is %d",rev_no);
   
   
   



}