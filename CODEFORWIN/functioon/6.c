//Write a function in C programming to find prime numbers using function. How to find all prime numbers between two intervals using functions. Display all prime numbers between a given range using function in C programming.

#include <stdio.h>
 int prime();
 int main ()
 {
     int ll,ul,temp,isprime;

     printf("Enter the lower limit and upper limit: ");
     scanf("%d %d",&ll,&ul);

     for(ll;ll<=ul;ll++)
     {
         isprime=prime(ll);

         if(isprime==1)
            printf("%d\t",ll);
     }
 }

 int prime (int x)
 {
    int i=2,isPrime=1,temp1;

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
        temp1=1;
    else
        temp1=2;
    return temp1;
 }