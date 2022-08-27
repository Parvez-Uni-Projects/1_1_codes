//Write a C program to check whether a number is even or odd using functions.
#include <stdio.h>
int evenodd();
int main ()
{
    int num1,temp;

    printf("Enter a number to find the even or odd : ");
    scanf("%d",&num1);
    temp=evenodd(num1);
    if(temp==1)
    printf("%d is an odd number ",num1);
    else
    printf("%d is an even number",num1);
}
int evenodd(int x)
{
    int reminder;
    reminder=x%2;
    return reminder;
}