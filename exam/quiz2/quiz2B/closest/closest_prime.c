#include <stdio.h>
int prime();
int minPrime(int);
int maxPrime(int);
int closest(int);
int main ()
 {
     int num;
     printf("Enter an integer number : ");
     scanf("%d",&num);
    if (prime(num)==num)
        printf("%d is a prime number",num);
    else 
            printf("The closest prime number is %d", closest(num));
 }
int prime (int x) 
 {
    int i=2,isPrime=1;
    while(i <= x/2)   //we are dividing it by 2 to make the code more optimized
    {
        if(x%i==0)  //here x = the number user inputs
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
    for( ;ll>=1 ;ll--)
     {
         if(prime(ll)==ll)
         {  
            return ll;
            break; 
         }        
     }
}
int maxPrime(int ll)
{
    for(  ;ll>=1 ;ll++)
     {
         if(prime(ll)==ll)
         {  
            return ll;
            break;  
         }        
     }
}
int closest(int num)
{   
    if((num-minPrime(num))>(maxPrime(num)-num))
            return maxPrime(num);
    else
            return minPrime(num);
}

