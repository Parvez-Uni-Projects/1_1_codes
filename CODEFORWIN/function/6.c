//Write a function in C programming to find prime numbers using function. How to find all prime numbers between two intervals using functions. Display all prime numbers between a given range using function in C programming.

#include <stdio.h>
int prime();
int main ()
 {
     int ll,ul,isprime;

     printf("Enter the lower limit and upper limit: ");
     scanf("%d %d",&ll,&ul);
    
     for(ll;ll<=ul;ll++)
     {
         if(prime(ll))
            printf("%d\t",ll);
     }
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
       return 1;
    else
       return 0; 
 }