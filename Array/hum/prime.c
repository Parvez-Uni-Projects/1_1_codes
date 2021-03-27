//primes

#include <stdio.h>
int isPrime(int);
int main ()
{
    int i,size,sum=0;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for (i=0;i<size;i++)
    {   
        if(isPrime(a[i]))
        {   
            sum+=a[i];
            printf("%d\t",a[i]);
        }
            
    }

     printf("The sum is %d \t", sum);

    return 0;
}

//prime function building
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