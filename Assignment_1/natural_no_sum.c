
/*
Que 6 :Write a C program to find sum of all natural numbers between 1 to n.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 
#include<stdio.h>
void main()
{
    int n;
    int i=1;
    int total=0;
    //initialization of varibles
    printf("enter the number : \n");
    scanf("%d",&n);
    while(i<=n)
    {
        total+=i;
        i++;
    }
    //end of while
    printf("the sum of number is %d \n",total);


}