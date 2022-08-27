/*Write a C program to input two numbers and perform all arithmetic operations. How to perform all arithmetic operation between two numbers in C programming. C program to find sum, difference, product, quotient and modulus of two given numbers.*/
#include <stdio.h>
int main ()
{
    int a,b;

    scanf("%d%d",&a,&b);

    printf("%d\n",(a+b));
    printf("%d\n",(a*b));
    printf("%d\n",(a-b));
    printf("%d\n",(a/b));
    printf("%d\n",(a%b));

}