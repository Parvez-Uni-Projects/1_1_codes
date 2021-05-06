#include <stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,sum;

    2*3 2*3

    printf("Enter the first matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Enter the second matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
                for(k=0;k<3;k++)
                    sum+= a[i][k] * b[k][j];
                        c[i][j]=sum;
        }
    }

    printf("The multiplied matrix is  matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }



}