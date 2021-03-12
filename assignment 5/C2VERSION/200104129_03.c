//Write a recursive function to calculate the sum of digits of the number given as input.

#include <stdio.h>
int sum(int);
int main ()
{
    int n1;

    printf("Enter theree numberes ");
    scanf("%d",&n1);

    printf("The sum of the number is %d",sum(n1));
    return 0;
}

int sum(int n1)
{
    if (n1==0)
        return 0;
    else 
        return (n1%10) + sum(n1/10);
}