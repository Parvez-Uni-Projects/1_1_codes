#include <stdio.h>

int main ()
{

    int num1,num2 ;

    printf("Enter the 1st value : ");
    scanf("%d" ,&num1);

    printf("Enter the 2nd value : ");
    scanf("%d" ,&num2);

    int sum = num1 + num2 ;
    int subtract = num1 - num2;
    int multiply = num1 * num2;
    int division =num1 / num2 ;

    printf("\nsum =%d \nsubstraction=%d \n multiplication=%d \ndivision=%d\n",sum,subtract,multiply, (float) division);

    return 0;
}