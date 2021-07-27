#include<stdio.h>
void main()
{
    int a[10]={11,15,45,78,63};
    int search,i;
    int flag=0;
    printf("eneter number to be search \n");
    scanf("%d",&search);
    for ( i = 0; i < 5; i++)
    {
        if (search == a[i])
        {
            flag=1;
            printf("elemet fount \n");
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("element not found \n");
    }
    
    


}