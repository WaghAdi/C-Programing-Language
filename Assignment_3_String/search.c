#include <stdio.h>
#include <stdlib.h>
void main()
{
    char originalStr[30];
    char cheakStr[30];
    int i = 0, j, flag;
    int tempflag = 0;
    printf("Please Enter the string ");

    fgets(originalStr, sizeof(originalStr), stdin);
    printf("Please Enter the string which want to search in original string ");

    fgets(cheakStr, sizeof(cheakStr), stdin);
    while (originalStr[i] != '\n')
    {
        if (originalStr[i] == cheakStr[0])
        {
            j = 0;
            flag = 0;
            while (cheakStr[j] != '\n')
            {
                if (originalStr[i] != cheakStr[j])
                {
                    flag = 1;
                    break;
                }
                i++, j++;
            }
            if (cheakStr[j] == '\n' && flag == 0)
            {
                tempflag = 1;
                printf("Element found \n");
                break;
            }
        }
        i++;
    }

    if (tempflag == 0)
    {
        printf("NOt found");
    }
}