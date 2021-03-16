//Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>
int palindrome(int,int);
int main()

{

    int num1;

    printf("Enter a value ");
    scanf("%d",&num1);

    palindrome(num1,num1);
}

int palindrome(int num1,int num2)
{
    if(num1==0)
        return 0;
    else
    {
        int palin=(num1%10*10)+palindrome(num1/10,num2);
        
        if(num2==palin)
            printf("%d is a palindrome number\n",palin);
        else 
        printf("%d is a not palindrome number\n",palin);

    }
}