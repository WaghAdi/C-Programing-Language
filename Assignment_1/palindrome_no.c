/*
Que 17 : Write a C program to check whether a number is palindrome or not.
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
   int original_no=n;
   while(n!=0)
   {  remainder=n%10;
      rev_no=(rev_no*10)+remainder;//3
      n=n/10;

     
   }
    //end of while
   if (rev_no == original_no)
   {
       printf("number is panlindrome");
   }
   else
   {
     printf("number is not panlindrome");
   }
   
   



}