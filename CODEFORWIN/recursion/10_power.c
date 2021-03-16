//Write a C program to find power of any number using recursion.
#include <stdio.h>
int power(int,int);
int main()
{
    int num1,num2;
    printf("If you want to find x^n ,enter x & n ");
    scanf("%d%d",&num1,&num2);
    printf("The result is %d",power(num1,num2));
}
int power(int num1,int num2)
{
    if(num2==0)
        return 1;
    else 
        return num1*power(num1,num2-1);
}