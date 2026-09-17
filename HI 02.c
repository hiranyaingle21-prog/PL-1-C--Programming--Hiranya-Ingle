// Program 2: Write a program to make use of basic I/0 functions using different data types
   User defined values
 #include<stdio.h>
  int main()
{
    int rollnum;
    float per;
    char grade;
    printf("\nEnter Student Roll Number:");
    scanf("%d",&rollnum);
    printf("\nEnter Student Percentage:");
    scanf("%f",&per);
    printf("\nEnter Student Grade:");
    scanf(" %c",&grade);
    
    printf("\n ----Student Information----\n");
    printf("\n Roll Number is:%d",rollnum);
    printf("\n Percentage is:%f",per);
    printf("\n Grade is:%c",grade);
    return 0;
}
