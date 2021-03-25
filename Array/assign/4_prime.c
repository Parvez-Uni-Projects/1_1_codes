#include<Stdio.h>
int isPrime(int);
int main ()
{
     int array[20],sum=0,i,size;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    printf("Enter the array ");
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    for (i=0;i<size;i++)
        {
            if (isPrime(array[i])) 
                sum+=array[i];
        }
        printf("The sum is  %d\t",sum);
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