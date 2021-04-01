//Write a C program to subtract two matrices.
#include <stdio.h>
int main ()
{
    int a[10][10],c[10][10],i,j,num1;

    printf("Enter the first matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

     printf("Enter the multiplier\n");
     scanf("%d",&num1);


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           c[i][j]=a[i][j] *num1;
    }

    printf("Sum matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
}