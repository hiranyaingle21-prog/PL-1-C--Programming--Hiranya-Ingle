//Program 24 : Write a program to read two matrices of same order, perform matrix addition and display resultant matrix using 2D array.
Solution(3): Using do-while loop
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("Enter elements of matrix A:\n");
    i=0;
    do
    {
        j=0;
        do
        {
          scanf("%d",&a[i][j]);
          j++; 
        }while(j<3);
        i++;         
     }
     printf("Enter elements of matrix B:\n");
     i=0;
     do
     {
       j=0;
       do
       {
          scanf("%d",&b[i][j]);
          j++;
       }while(j<3);
       i++;
     }while(i<3);
     i=0;
     do
     {
       j=0;
       do
       {
          c[i][j]= a[i][j]+b[i][j];
          j++;
       }while(j<3);
          i++;
     }while(i<3);
     i++;
     printf("\n Resultant matrix:\n");
     i=0;
     do
      {
        j=0;
        do
        {
          printf("%4d",c[i][j]);
          j++;
        }while(j<3);
        printf("\n");
        i++;
      }while(i<3);
      return 0;
}

