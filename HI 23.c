//Program 23 : Write a program to read two matrices of same order, perform matrix addition and display resultant matrix using 2D array.
Solution(2): Using while loop
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("Enter elements of matrix A:\n");
    i=0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
          scanf("%d",&a[i][j]);
          j++; 
        }
        i++;         
     }
     printf("Enter elements of matrix B:\n");
     i=0;
     while(i<3)
     {
       j=0;
       while(j<3)
       {
          scanf("%d",&b[i][j]);
          j++;
       }
       i++;
       i=0;
       while(i<3)
       {
          j=0;
          while(j<3);
          {
             c[i][j]= a[i][j]+b[i][j];
             j++;
          }
          i++;
      }
      printf("\n Resultant matrix:\n");
      i=0;
      while(i<3)
      {
        j=0;
        while(j<3)
        {
          printf("%4d",c[i][j]);
          i++;
        }
      printf("\n");
      i++;
     }
     return 0;
}

