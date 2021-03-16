//Write a C program to find GCD (HCF) of two numbers using recursion.

#include <stdio.h>
int gcd(int,int,int);
int main()
{
    int a,b,i;
    printf("Enter two values ");
    scanf("%d%d",&a,&b);
    if (a>b)
        i=b;//finding the min and max value and setting the minimum as the divisor
    else
        i=a;
    printf("The gcd of %d %d is %d",a,b,gcd(a,b,i)); //here we are passing the value of i as the divisor of the two numbers
}
int gcd(int num1,int num2,int div)
{
    if (num1%div==0 && num2%div==0)
        return div;
    else
        return gcd(num1,num2,div-1); //as div is not the divisor then it will go down by 1 
}
