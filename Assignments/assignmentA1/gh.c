#include<stdio.h>
int main()
{
    int i,n,j,k;
    // i --> row
    //j--> coll
    //k--> space

    printf("Enter the value :");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}