//1 + x2/2! + x4/4! + x6/6! + …….xn/n!
#include<stdio.h>
#include<math.h>
int fac(int p);
int main()
{
    int n,k;
    float x,sum=0;

    printf("Enter the value of x and n: ");
    scanf("%f%d",&x,&n);

    for(k=2; k<=n ; k+=2)
    {
        sum+=(pow(x,k))/fac(k);

        printf("%f^%d/%d!\t",x,k,k);
    }
    printf("sum=%.2f",sum);

   

return 0;
}
int fac(int p)
{
    int f=1;

    for(int j=1; j<=p ;j++)
    {
        f*=j;
    }
    return f;
}