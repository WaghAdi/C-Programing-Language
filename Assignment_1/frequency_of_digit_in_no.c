/*
Que 18 : . Write a C program to find frequency of each digit in a given integer
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 

#include<stdio.h>
void main()
{ int n,original,temp,count,r1,r2;
printf("enter the number \n");
scanf("%d",&n);
original=n;
while (n != 0)
{   r1=n%10;
    temp=original;
    count=0;
   
    while(temp != 0)
    {
        r2=temp%10;
        if(r1 == r2)
        {
            count++;
        }
    temp=temp/10;
    }   
        printf("count of %d is %d \n",r1,count);
        n=n/10;

}


}