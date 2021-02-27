#include<stdio.h>
#  include <math.h>

void main()
{
    int x,i,n,j,sign=1;
    float sum=1,fact,power;
    printf("Enter The value of X & N:");
    scanf("%d%d",&x,&n);
    for(i=2;i<=n;i+=2)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact*=j;
        }
        sign=sign*(-1);
        sum+=(sign*((pow(x,i))/fact));
        printf("(%d)%d^%d/%d!\t",sign,x,i,fact);
        
    }
    printf("Sum:%.2f",sum);

}