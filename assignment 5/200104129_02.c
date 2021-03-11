//Write a recursive function that can reverse a number given as input. 

#include <stdio.h>
int reverse(int);
int isPow(int,int);
int main ()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);

    printf("The reverse of %d is %d %d",num,reverse(num));
}

int reverse(int n)
{
    if (n==0)
        return n
    else
        return (n%10)*10
}
/*
int reverse(int num)
{
    int i,digit,input,sum=0;
    input=num;
    
    for (i=0;0<input;i++)
    {
        input/=10;
    }
    for (;0<num;)
    {   
        digit=num%10;
        num/=10;
        i--;
        sum+=(digit*isPow(10,i));   
    }
    return sum; 
}

int isPow(int x,int y)
{   
    int pow=1;
    for(int i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}
*/