/*
Que 9 Write a C program to print multiplication table of any number.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 
#include<stdio.h>
void main()
{
    int i=1;
    int n,table;
     //initialization
   
    printf("enter the number : \n");
    scanf("%d",&n);
    table=n;
    
   
    while(i<=10)
    {
       printf("%d \n",n);
       n=n+table;
       i++;
      
    }
     //end of while
   
    


}