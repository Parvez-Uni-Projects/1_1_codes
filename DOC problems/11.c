/*. If a 5 digit number is input through the keyboard, write a program to reverse the
number.*/


#include<stdio.h>
int main()

{   
    //declaring the variables
    int a1,a2,a3,a4,a5;
    long number;
    printf("Enter the five digit number: ");
    scanf("%ld",&number);
    //applying the formula
    a1=(number%10),a2=(number%100)/10 ,a3=(number%1000)/100 ,a4=(number%10000)/1000 ,a5=(number/10000);
    
    printf("\n The sum of the digit is: %d%d%d%d%d",a1,a2,a3,a4,a5);
    return 0;
}
