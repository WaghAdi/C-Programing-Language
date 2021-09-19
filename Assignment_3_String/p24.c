#include <stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    int i = 0, m = 0;
    int j = 0;
    int count = 0;
    int k = 0, choice;
    printf("Please Enter the first string ");
    // scanf("%s",str);
    // gets(str);
    fgets(str1, sizeof(str1), stdin);
    printf("Please Enter the second string ");
    fgets(str2, sizeof(str2), stdin);
    printf("Please Enter the how many character want to add from second string ");
    scanf("%d", &choice);
    // printf(str);

    while (str1[i] != '\n')
    {

        i++;
    }
    while (str2[j] != '\n')
    {
        str1[i] = str2[j];
        count += 1;
        if (count == choice)
        {
            i++;
            break;
        }
        i++;
        j++;
    }
    str1[i] = '\0'; //for iterating
    printf("after concatination string is \n");
    while (str1[k] != '\0')
    {
        printf("%c", str1[k]);
        k++;
    }
}