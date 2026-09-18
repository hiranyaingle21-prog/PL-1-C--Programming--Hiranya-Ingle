// Program 16: Write a program to generate the multiplication table of any number using for loop.
#include <stdio.h>
int main()
{
    int num,i;
    printf("\n Enter a number:");
    scanf("%d",&num);
    printf("\n Multiplication table of %d \n",num);
     
    for(i=1;i<=10;i++)
    {
       printf("\n %d x %d = %d",num,i,num*i);   
    }
    return 0;
}