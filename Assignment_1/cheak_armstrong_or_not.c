/*  //error
Que 30: Write a C program to check whether a number is  
Armstrong number or not.
owner:Aditya Wagh
Batch:PPA9
*/
#include <stdio.h>
void main()
{
    int n, digit, sum, original,temp,count;
    int current;
    int cube = 1;
    sum = 0;
    count = 0;

    // int i=1;

    printf("enter the number \n");
    scanf("%d", &n);
    original = n;
    temp=n;
    while(temp != 0)
    {
     
     count++;
     count=count/10;
    }
    // printf("count is of digit is %d",count);
    while (n != 0)
    {
        digit = n % 10;
        cube = 1;
        for (int i = 1; i <= count; i++)
        {
            cube = cube * digit;
        }
        sum += cube;
        n = n / 10;
    }
    if (sum == original)
    {
        printf("%d is armstrong number", original);
    }
    else
    {
        printf("%d is not  armstrong number", original);

    }
}