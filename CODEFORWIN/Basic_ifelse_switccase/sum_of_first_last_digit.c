/*If a 4 digit number is input through the keyboard, write a program to obtain the sum
of the first and last digit of this number.*/

#include<stdio.h>
int main()
{
    int p1,p2,sum;
    long number;
    printf("Enter the four digit number: ");
    scanf("%ld",&number);

    p1=(number%10),p2=(number/1000) ;
    sum=p1+p2;
    printf("\n The sum of the digit is: %d",sum);
    return 0;
}