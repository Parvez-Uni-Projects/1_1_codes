//Write a recursive function to calculate the sum of digits of the number given as input.

#include <stdio.h>
int sum(int,int,int);
int main ()
{
    int n1,n2,n3;

    printf("Enter theree numberes ");
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("The sum of the number is %d",sum(n1,n2,n3));
    return 0;
}

int sum (int num1,int num2,int num3)
{
    int sum= num1+num2+num3;
    return sum;
}