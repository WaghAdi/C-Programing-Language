/*
Que 10 : Write a C program to count number of digits in a number.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 
#include<stdio.h>
void main()
{
   int n;
   int count=0;
   //initialization
   printf("enter the number : \n");
   scanf("%d",&n);
   while(n!=0)
   {

      n=n/10;
      count+=1;
   }
    //end of while
   printf("total digits are  %d ",count);
   



}