//Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
int sumdigit(int);
int main ()
{
    int num1;

    printf("Enter any value ");
    scanf("%d",&num1);

    printf("Sum of digits is %d",sumdigit(num1));

}

int sumdigit(int num1)
{
    if (num1==0)
        return 0;
    else 
        return (num1%10)+sumdigit(num1/10);
}