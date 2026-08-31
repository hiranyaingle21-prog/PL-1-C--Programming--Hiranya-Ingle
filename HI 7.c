// Program 7: Write a program to swap two numbers using a temprorary variable.
   Predefined values
   #include<stdio.h>
int main()
{
    int a,b,temp;
    a=111;
    b=222;
    printf("\n before swapping:");
    printf("\n a=%d,b=%d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n after swapping:");
    printf("\n a=%d, b=%d \n",a,b);
    return 0;
}