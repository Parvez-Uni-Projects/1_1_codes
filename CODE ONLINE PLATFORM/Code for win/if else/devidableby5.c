//Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main ()
{
    int num ;

    printf("Enter the number ");
    scanf("%d",&num);

    if (num%5==0 && num%11==0)
    {
        printf("%d The number is devidable by 5 and 11",num);
    }

    else{
        printf("%d The number is not devidble by 5 and 11",num);

    }
    
}