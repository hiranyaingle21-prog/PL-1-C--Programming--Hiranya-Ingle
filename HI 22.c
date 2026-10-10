// Program 22: Write a program to read two matrices of same order,perform matrix addition and display resultant matrix using 2D array.
Solution(1):Using for loop

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("Enter elements of matrix A:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
         scanf("%d",&arr[i][j]);            
      }
    }
    printf("Enter elements of matrix B:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
          scanf("%d",&b[i][j]);   
       }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
         c[i][j]=a[i][j]+b[i][j];    
      }
    }
    printf("\n Resultant matrix:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
         printf("%4d",c[i][j]);
      }
      printf("\n");
    }
    return 0;
}