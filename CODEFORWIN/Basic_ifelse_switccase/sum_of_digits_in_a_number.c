/*. If a 5 digit number is input through the keyboard, write a program to calculate and
print the sum of its digits.
[Hint: Use the modulus operator ‘%’]*/

#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,sum;
    long number;
    printf("Enter the five digit number: ");
    scanf("%ld",&number);

    a1=((number%10)*10000),a2=(((number%100)/10)*1000) ,a3=(((number%1000)/100)*100) ,a4=(((number%10000)/1000)*10) ,a5=(number/10000);

    sum=a1+a2+a3+a4+a5;
    printf("\n The sum of the digit is: %d",sum);
    return 0;
}






    
