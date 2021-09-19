// 29.Write a C program which accept string from user and then 
// accept range and reverse the string in that range without 
// taking another string.

#include <stdio.h>
void main()
{
    char str[100];
    int choice, temp, start, startRange, end, endRange;
    printf("Please Enter the string ");
    fgets(str, sizeof(str), stdin);
    printf("Please Enter start index \n ");
    scanf("%d", &start);
    printf("Please Enter end index \n ");
    scanf("%d", &end);
    startRange = start;
    endRange = end;
    int i = 0;
    int k = 0;
    int j = choice - 1;
    int count = 0;
 while (str[k] != '\n')
 {
     count+=1;
     k++;
 }
 



    while (str[i] != '\n')
    {
        if (i < startRange || i > endRange)
        {
            i++;
        }
        else
        {
            i = endRange;
            while (start <= end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++, end--;
            }
            i++;
        }
    }
    
    for (int m = 0; m < count; m++)
    {
        printf("%c", str[m]);
    }
}