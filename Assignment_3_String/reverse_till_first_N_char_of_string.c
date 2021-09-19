// 28.Write a C program which accept string from user and then 
// reverse the string till first N characters without taking another 
// string.

#include<stdio.h>
void main()
{
    char str[100];
    int choice,temp;
    printf("Please Enter the string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str,sizeof(str),stdin);
    printf("Please Enter how many element want to reverse \n ");
    scanf("%d",&choice);
    // printf(str);
    int i=0;
    int k=0;
    int j=choice-1;
    int count=0;
    while (str[k] != '\n')
    {
       count++;
        k++;
    }
  while (i<=j)
  {
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      i++,j--;
  }
  for (int m = 0; m < count; m++)
  {
      printf("%c",str[m]);
  }
  
  
}