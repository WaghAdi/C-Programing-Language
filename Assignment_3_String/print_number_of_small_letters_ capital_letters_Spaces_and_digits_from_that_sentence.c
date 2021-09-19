// 12.Write a C program which accept sentence from user and 
// print number of small letters, capital letters, Spaces and digits from that sentence.
// Eg:
// Input String: abcDE 5Glm1 O
// Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2


#include<stdio.h>
void main()
{
    char str[100];
    int smallLetter=0;
    int capitalLetter=0;
    int spaces=0;
    int digit=0;
    int otherChar=0;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf(str);
    int i=0;
    printf("Output is\n ");
    while (str[i] != '\n')
    {
        if (str[i] >64 && str[i]<91)
        {
           capitalLetter+=1;
        }
        else if (str[i] >96 && str[i]<123)
        {
            smallLetter+=1;
        }
        else if (str[i] == 32)
        {
            spaces+=1;
        }
        else if (str[i]>47 && str[i] <58)
        {
            digit+=1;
        }
        else
        {
             otherChar+=1;
        }
        
        
        
    i++;
        
       
    }
    
    printf("Total capital letters are %d \n",capitalLetter);
    printf("Total small letters are %d \n",smallLetter);
    printf("Total digit are %d \n",digit);
    printf("Total spaces are %d \n",spaces);
    printf("Total other charracyer are %d \n",otherChar);
   
    
}