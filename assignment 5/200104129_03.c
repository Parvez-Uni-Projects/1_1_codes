// 3.  Write a recursive function which can count the number of digits in a given number.

#include <stdio.h>
int count(int);
int main ()
{
    int num;

    printf("Enter an integer value : ");
    scanf("%d",&num);

    printf("There are %d digits in %d",count(num),num);
}

int count(int num)
{
    int i,digit;
    for (i=0;0<num;i++)
    {
        num/=10;
    }
    return i;
}