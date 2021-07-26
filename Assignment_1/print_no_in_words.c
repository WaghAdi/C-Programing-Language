/*
Que 19: Write a C program to enter a number and print it in words.
owner:Aditya Wagh
Batch:PPA9
*/
//Solution 

#include<stdio.h>
void main()
{
   int n,rev_no=0,digit;
   int remainder;
   //initialization
   printf("enter the number : \n");
   scanf("%d",&n);
   int original_no=n;
//    for reversing number
   while(n!=0)
   {  remainder=n%10;
      rev_no=(rev_no*10)+remainder;//3
      n=n/10;

     
   }
// end of while 


//    printing in digit
   while (rev_no != 0)
   {
       digit=rev_no%10;
       switch (digit)
       {
           case 0:
            printf("zero \n");
            break;
           case 1:
            printf("one \n");
            break;
           case 2:
            printf("two \n");
            break;
           case 3:
            printf("three \n");
            break;
           case 4:
            printf("four \n");
            break;
           case 5:
            printf("five \n");
            break;
           case 6:
            printf("six \n");
            break;
           case 7:
            printf("seven \n");
            break;
           case 8:
            printf("eight \n");
            break;
           case 9:
            printf("nine \n");
            break;
           default:
            printf("Error");
            break;
       }
       rev_no=rev_no/10;
   }
//    end of while 
   
   
   



}