#include<stdio.h>

void main()
{
    int i,n,j,sign=-1,x;
    float sum=1,fact,power;
    printf("Enter The value of X & N:");
    scanf("%d%d", &x, &n);
    for(i=2;i<=n;i=i+2)
    {
        power=1;
        for(j=1;j<=i;j++)
        {
            power=power*x;
        }
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+((power/fact)*sign);
        sign=sign*(-1);
    }
    printf("Sum:%f",sum);

}