//Write a C program to find sum of minor diagonal elements of a matrix.

#include <stdio.h>

int main ()
{
    int a[10][10],i,j,sum=0;

    printf("Enter the first matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

   

    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            if(i+j==((3+1)-2))
                sum+=a[i][j];  
        }
              
    }

    printf("The sum of minordiagonal elements of matrix is %d ",sum);

   
}