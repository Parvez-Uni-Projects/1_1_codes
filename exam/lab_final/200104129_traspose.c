#include <stdio.h>
int main ()
{
    int main[10][10],difference[10][10],transpose[10][10],i,j;

    printf("Enter the first matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&main[i][j]);
    }

    printf("The transpose matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           transpose[j][i]=main[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",transpose[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           difference[i][j]=main[i][j] - transpose[i][j];
    }

    printf("Differences between main matrix and transpose matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",difference[i][j]);
        printf("\n");
    }  
}