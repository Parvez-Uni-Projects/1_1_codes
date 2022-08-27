/**
 * C program to print all prime numbers between 1 to n
 */

#include <stdio.h> // standard input output

int end;

void prime_number_finder();

int main()
{
   int tanisha , tAnisha;     //integer

    /* Input upper limit to print prime */
    printf ("Find prime numbers between 1 to : ");
    scanf  ("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);

    prime_number_finder();
    
    return 0;
}

void prime_number_finder()
{
    int i, j, isPrime; // isPrime is used as flag variable
    int count =0;
    /* Find all Prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1; 

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d, ", i);

            count++;
        }
    }
    // printf("\nTotal prime number is %d ",count);

}