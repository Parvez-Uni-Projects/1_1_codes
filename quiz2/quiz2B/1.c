//Write a function in C programming to find prime numbers using function. How to find all prime numbers between two intervals using functions. Display all prime numbers between a given range using function in C programming.

#include <stdio.h>
int prime();
int minPrime(int);
int maxPrime(int);
int main ()
 {
     int ll,isprime,max,min;

     printf("Enter an integer number : ");
     scanf("%d",&ll);
    /*
     for(   ;ll<=1000 ;ll++)
     {
         if(prime(ll))
         {
            printf("%d\t",ll);
            max=prime(ll);
            break;
         }        
     }
    */
     int minprime=minPrime(ll);
     int maxprime=maxPrime(ll);

     //printf("Min prime is %d",minprime);
     //printf("Min prime is %d",maxprime);

     if ((ll-minprime)>(maxprime-ll))
            printf("The closest prime number is %d",maxprime);
    else
        printf("The closest prime number is %d",minprime);

 }

int prime (int x) 
 {
    int i=2,isPrime=1;

    while(i<=x/2)
    {
        if(x%i==0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime == 1 && x > 1)
       return x;
    else
       return 0; 
 }

int minPrime(int ll)
{
    int input=ll;

    for(   ;ll>=1 ;ll--)
     {
         if(prime(ll)==ll)
         {
            //printf("%d\t",ll);
            int min=prime(ll);
            break;
            return input;
         }        
     }
}

int maxPrime(int ll)
{
    int input=ll;

    for(   ;ll>=1 ;ll++)
     {
         if(prime(ll)==ll)
         {
            //printf("%d\t",ll);
            int min=prime(ll);
            break;
            return input;
         }        
     }
}

