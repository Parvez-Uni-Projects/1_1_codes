//Write a C program to find factorial of any number using recursion.
#include <stdio.h>
int fact(int);
int main ()
{
    int num1;

    printf("Enter any value ");
    scanf("%d",&num1);

    printf("%d! = %d",num1,fact(num1));
}
int fact(int num1)
{
    if (num1==0)
        return 1;
    else    
        return num1*fact(num1-1);
}