// C program to whether a number is prime number or not
 

#include <stdio.h>

int main()
{
    int i=2, num, isPrime=1;
    
    printf("Enter a number to checkprime or not : ");
    scanf("%d", &num);

    while(i<=num/2)
    {
        if(num%i==0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }
    if(isPrime == 1 && num > 1)
        printf("%d is prime number",num);
    else
        printf("%d is not a prime number",num);
    return 0;
}