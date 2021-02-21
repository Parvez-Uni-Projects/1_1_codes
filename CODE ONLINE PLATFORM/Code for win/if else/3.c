//Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>
int main()
{
    int num;

    printf("Input the number ");
    scanf("%d",&num);

    if (num<0)
    {
    printf("%d is a negative number",num);
    }
    else if (num>0)
    {
    printf("%d is a positive number",num);
    }
    else if (num==0)
    {
    printf("%d is ZERO ",num);
    }
    
}