#include<stdio.h>
void main()
{
    char str[100];
    int count=0,i=0;
    printf("Please Enter the string ");
    
    fgets(str,sizeof(str),stdin);
    // printf("%d \n",str[i]);
    // printf("%c",str[i]+1);
    if (str[i] == 65)
    {
        printf("Close to answer");
    }
    else{
        printf("far to answer");

    }
    
    
}