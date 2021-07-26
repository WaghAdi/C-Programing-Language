/*
Que 3 : Write a C program to print all alphabets from a to z. -Using while loop

owner:Aditya Wagh
Batch:PPA9
*/
//Solution 
#include<stdio.h>
void main()
{
    int n=1;   //initialization if iteration variable
    char temp='a'; //character intilalization
    
    while(n<=26)
    {
       printf("%c \n",temp);
       temp++;
       n++;
    }
    //end of while


}



