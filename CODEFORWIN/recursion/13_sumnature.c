//Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include<stdio.h>
int naturesum(int);
int main ()
{
    int num1;
    printf("Enter the value of n ");
    scanf("%d",&num1);
    printf("The Sum is %d",naturesum(num1));
}
int naturesum(int num1)
{
    if (num1==1)
        return 1;
    else
        return num1+naturesum(num1-1);
}