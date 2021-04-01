#include <stdio.h>

int main ()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],i,j,search;

    printf("Enter the first matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
/*
    printf("Enter the second matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }

    printf("Enter the search value ");
    scanf("%d",&search);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           if(a[i][j]==search)
                printf("The value is found at a[%d][%d]",i,j);
    }


    for(i=0;i<3;i++) //findinf the summation 
    {
        for(j=0;j<3;j++)
           c[i][j]=a[i][j] + b[i][j];
    }

    printf("The summation is \n");  //finding the summation 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    */
    


    for(i=0;i<3;i++)  //finding the transpose
    {
        for(j=0;j<3;j++)
           d[j][i]=a[i][j];
    }

    printf("The transpose matrix is \n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",d[i][j]);
        printf("\n");
    }

}