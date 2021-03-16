//Write a C program to find LCMof two numbers using recursion.

#include <stdio.h>
int gcd(int,int,int);
int main()
{
    int a,b,i;
    printf("Enter two values ");
    scanf("%d%d",&a,&b);
    if (a>b)
        i=a;//finding the min and max value and setting the maximum as multiplier
    else
        i=b;
    printf("The gcd of %d %d is %d",a,b,gcd(a,b,i)); //here we are passing the value of i as the multiplier of the two numbers
}
int gcd(int num1,int num2,int mul)
{
    if (mul%num1==0 && mul%num2==0)
        return mul;
    else
        return gcd(num1,num2,mul+1); //as div is not the divisor then it will go down by 1 
}
