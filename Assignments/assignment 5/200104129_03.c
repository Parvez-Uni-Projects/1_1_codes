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

int count(int n)
{   
    if (n==0)
        return 0;
    else 
        return 1 + count(n/10);
}