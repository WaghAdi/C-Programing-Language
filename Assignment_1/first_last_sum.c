/*
Que 12: Write a C program to find sum of first and last digit.
owner:Aditya Wagh
Batch:PPA9
*/

//Solution 

#include<stdio.h>
void main()
{
   int n,temp,last_digit,first_digit;
   int count=0;
   //initialization
   printf("enter the number : \n");
   scanf("%d",&n);
   while(n!=0)
   {
       temp=n%10;
       count++;
       if (count==1)
       {
           last_digit=temp;
       }
       n=n/10;
       if(n==0)
       {
           first_digit=temp;
       }

     
   }
    //end of while
   
   printf("first digit is %d \n",first_digit);
   printf("last digit is %d \n",last_digit);
   printf("sum of first and last digit is %d", first_digit +last_digit);
   
   



}