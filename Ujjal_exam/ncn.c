#include <stdio.h>
long long Ncr(long,long);
long long Npr(long,long);
long long fact(long);

int main ()
{
    long long n,i,sum=0;
    scanf("%lld",&n);

    for(i=0;i<=n;i++)
    {
        sum+=Ncr(n,i);
    } 
    sum=sum%1000000007;
    printf("%lld",sum);
}

long long Npr(long  x,long  y)
{   
    long long nPr;
    nPr=((fact(x))/(fact(x-y)));
    return nPr;
}

long long Ncr(long x,long y)
{
    long long nCr;
    nCr= Npr(x,y)/fact(y);
    return nCr;
}

long long fact(long x)
{
    long long fac=1,i;
    for(i=1;i<=x;i++)
        fac*=i;
    return fac;
}