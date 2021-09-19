// 18.Write a C program which toggles the case of a string.
// Eg:
// Input String: technOrbit Infosystems
// Output String: TECHNoRBIT iNFOSYSTEM

#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;
    printf("Please Enter the string ");

    fgets(str, sizeof(str), stdin);
    // printf(str);
    int i = 0;
    int j = 0;
    printf("Output is \n");
    while (str[i] != '\n')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        
        

        i++;
    }
    printf(str);
    return 0;
}