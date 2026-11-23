//Program 34:Write a program to define a union containing an integer,a float,and a character,and demostrate how memory is shared among its members.
#include <stdio.h>
union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;

    printf("Size of Union: %lu bytes\n", sizeof(d));

    printf("\nMemory Size of Each Member:\n");
    printf("Integer: %lu bytes\n", sizeof(d.i));
    printf("Float: %lu bytes\n", sizeof(d.f));
    printf("Character: %lu byte\n", sizeof(d.ch));

    printf("\nMemory Address of Each Member:\n");
    printf("Address of Integer: %p\n", (void *)&d.i);
    printf("Address of Float: %p\n", (void *)&d.f);
    printf("Address of Character: %p\n", (void *)&d.ch);

    d.i = 100;
    printf("\nInteger Value: %d\n", d.i);

    d.f = 25.5;
    printf("Float Value: %.2f\n", d.f);

    d.ch = 'A';
    printf("Character Value: %c\n", d.ch);

    return 0;
}
