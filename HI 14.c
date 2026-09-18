// Program 14: Write a program to generate the multiplication table of any number using while loop.
#include <stdio.h>
int main()
{
    int num,i=1;
    printf("\n Enter a number:");
    scanf("%d",&num);
    printf("\n Multiplication table of %d \n",num);
     
    while(i<=10)
    {
       printf("\n %d x %d = %d",num,i,num*i); 
       i++;
    }
    return 0;
}