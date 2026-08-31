//Program 4:Write a program to calculate area of circle.
  User defined values
#include<stdio.h>
 int main()
{
    float radius,area;
    printf("\nEnter radius:");
    scanf("%f",&radius);
    area=(3.14*radius*radius);
    printf("\nArea=%f",area);
    return 0;
}