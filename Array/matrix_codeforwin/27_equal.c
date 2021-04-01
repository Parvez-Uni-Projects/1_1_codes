#include <stdio.h>

int main ()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],i,j,equal=-1;

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

    for(i=0;i<3 && equal != 0;i++)
    {   
        for(j=0;j<3;j++)
        {
            if(a[i][j]==b[i][j])
                    equal=1;
            else
                    equal=0; 
        }
              
    }

    if(equal)
        printf("The matrixes are equal ");

    else
        printf("The matrixes are not equal");
}