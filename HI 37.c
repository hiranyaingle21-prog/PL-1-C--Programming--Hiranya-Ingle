// Program 37:Write a program to accept two strings and perform operations using inbuilt functions
1) Copy one string into another
2) Reversing the string
3) Length of the string
4) Compare two strings
5) Concatenates one string to another

Solution: Using any built-in string functions
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];

    printf("\nEnter First String: ");
    scanf("%s", str1);

    printf("\nEnter Second String: ");
    scanf("%s", str2);

    strcpy(str3, str1);
    printf("\nCopied String: %s", str3);

    printf("\nReverse of First String: %s", strrev(str1));

    printf("\nLength of First String: %d", strlen(str1));
    printf("\nLength of Second String: %d", strlen(str2));

    if (strcmp(str1, str2) == 0)
    {
        printf("\nBoth Strings are Equal");
    }
    else
    {
        printf("\nBoth Strings are Not Equal");
    }

    strcat(str1, str2);
    printf("\nConcatenated String: %s", str1);

    return 0;
}
