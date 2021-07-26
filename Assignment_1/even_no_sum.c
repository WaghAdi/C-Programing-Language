/*
Que 7 :Write a C program to find sum of all even numbers between 1 to n.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 
#include<stdio.h>
void main()
{
    int i=1;
    int n;
    int total=0;
    //initialization
    printf("enter the number : \n");
    scanf("%d",&n);
   
    while(i<=n)
    {
       if (i%2 == 0)
       {
          total+=i;
       }
       i++;
    }
     //end of while
    printf("sum is %d",total);


}