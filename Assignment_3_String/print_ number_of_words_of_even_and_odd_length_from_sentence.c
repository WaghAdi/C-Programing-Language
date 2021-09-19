// 14.Write a C program which accept sentence from user and 
// print number of words of even and odd
// length from that sentence.
// Eg:
// Input String: India is my country. I love my country.
// Output : Even: 5 Odd: 2

#include<stdio.h>
void main()
{
    char str[100];
    int evenCount=0;
    int oddCount=0;
    int count=0;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is ");
    while (str[i] != '\n')
    {
        while(str[i] == ' ')
        {
            i++;
        }
        count=0;
        while(str[i] != '\n' && str[i] !=' ')
        { count+=1;
          i++;
          
          
         
        }
        if (count % 2 == 0)
        {
            evenCount+=1;
        }
        else
        {
            oddCount+=1;
        }
        
       
    }
    
    printf("Total evev Words are %d \n",evenCount);
    printf("Total odd Words are %d",oddCount);
    
}