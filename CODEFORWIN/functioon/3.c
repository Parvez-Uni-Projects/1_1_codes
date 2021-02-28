//Write a C program to find maximum and minimum between two numbers using functions.
#include <stdio.h>

int min();
int max();

int main ()
{
    int num1,num2;

    printf("Enter two number to find the min max : ");
    scanf("%d%d",&num1,&num2);

    printf("Minimum number is %d \nMaximum Number is %d",min(num1,num2),max(num1,num2));
}
int min (int num1,int num2)
{
    int min;
    if(num1>num2)
    min=num2;
    else
    min=num1;
    return min;
}
int max (int num1,int num2)
{
    int max;
    if(num1>num2)
    max=num1;
    else
    max=num2;
    return max;
}
