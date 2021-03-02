#include<stdio.h>
#include<math.h>

float fact(int n);
float power(int x,int num);
int main()
{
    int i,n,x;
    
    printf("Enter X & N:");
    scanf("%d%d", &x, &n);
    float sum=0;
    
    /*for(i=1;i<=n;i+=2)
    {
        sum+=((pow(x,i))/fact(i));
    }*/
   for(i=1;i<=n;i+=2)
    {
        sum+=((power(x,i))/fact(i));

       // printf("%d^%d/%d! %d \t",x,i,i,sum);
    } 


    //printf("%d",fact(x));
    //printf("%d",power(x,n));

   printf("Sum:%.2f",sum);

}
float power(int x,int num)
{
    int i;
    float pow=1;

    for(i=1;i<=num;i++)
    {
        pow=pow*x;

    }
   return pow;
}
float fact(int n)
{
    int i;
    float fac=1;
    for(i=1;i<=n;i++)
    {
       fac*=i;
    }
    return fac;
}