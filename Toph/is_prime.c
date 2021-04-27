#include <stdio.h>
int isPrime(int);
int main ()
{
    int n;
    scanf("%d",&n);
    if(isPrime(n))
        printf("YES");
    else 
        printf("NO");

        return 0;

}

int isPrime(int x)
{
    int i=2,isPrime=1;

    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1 && x > 1)
       return 1;
    else
        return 0;
}