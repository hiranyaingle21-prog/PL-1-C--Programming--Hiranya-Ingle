// Program 12: Write a program to check whether number is positive,negative or zero.
#include <stdio.h>
int main()
{
    int num;
    printf("\n Enter your number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("\n The number is positive.");
    }
    else if(num<0)
    {
        printf("\n The number is negative");
    }
    else
    {
        printf("\n The number is zero.")
    }
    return 0;
}

 