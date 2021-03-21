//Write a C program to find maximum between two numbers.

#include <stdio.h>
int main()
{
    int num1 , num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);

    if (num1>num2)
    {
        printf("%d is the maximum Number",num1);
        /* code */
    }

    else if (num2>num1)
    {
        printf("%d is the maximum Number",num2);
        /* code */
    }

    else{
        printf("The numbers are invalid");
    }
    
}