/*
Que 4 : Write a C program to print all even numbers between 1 to 100 -Using while loop
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 
#include<stdio.h>
void main()
{
    int i=1;//initialization
    
   
    while(i<=100)
    {
       if (i%2 == 0)
       {
           printf("%d \n",i);
       }
       i++;
    }
    //end of while


}