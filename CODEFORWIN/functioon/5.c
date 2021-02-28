//Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
#include <stdio.h>
int prime();
int armstrong();
int perfect();
int main ()
{
    int num1;
    printf("Enter a number : ");
    scanf("%d",&num1);

    int temp1=prime(num1);
    int temp2=armstrong(num1);
    int temp3=perfect(num1);
    
    if((temp1==1&&temp2==1)||(temp1==1&&temp3==1)||(temp2==1&&temp3==1))
    {   
        if(temp1==1&&temp2==1)
            printf("%d is both prime and armstrong number ",num1);
        else if(temp1==1&&temp3==1)
            printf("%d is both prime and perfect number ",num1);
        else if(temp2==1&&temp3==1)
            printf("%d is both armstrong and perfect number ",num1);
    }
    else if (temp1==1||temp2==1||temp3==1)
    {   
        if(temp1==1)
            printf("%d is prime number ",num1);
        else if(temp3==1)
            printf("%d is perfect number ",num1);
        else if(temp2==1)
            printf("%d is armstrong number ",num1);
    }       
}

int prime(int x)
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

int armstrong (int x)
{
    int temp2;

    temp2=x+2;

    return temp2;
}
int perfect (int x)
{
    int temp3,i,sum=0;

    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    if(sum==x)
        temp3=1;
    else
        temp3=2;
    return temp3;
}

