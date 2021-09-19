// 31.Write a C program which accept string from user and check 
// whether string is palindrome or not.


#include<stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    int count=0,lastChar;
    printf("Please Enter the string ");
    
    fgets(str1,sizeof(str1),stdin);
                            
    int i=0;
    int k=0;
    int flag=0;
    int j;
    int firstChar=0;
    printf("Output is \n");
    while (str1[i] != '\n')
    {
        // lastChar=i;
        count+=1;
        i++;
        
    }
    lastChar=i-1;
    
    while (lastChar>=0)
    {
        str2[k]=str1[lastChar];
        k++;
        lastChar--;
    }
    
    for (int m = 0; m < count; m++)
    {
        if (str1[m] == str2[m])
        {
            continue;
        }
        else
        {
            flag=1;
            break;
        }
        
    }
    
    if (flag==1)
    {
        printf("Not Palindrome");
    }
    else if (flag==0)
    {
        printf("Palindrome");
        /* code */
    }
    
    
    

    
   
    
}