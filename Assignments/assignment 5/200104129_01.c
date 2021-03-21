//1.  Write a function that can generate the Sum of Natural Numbers Using Recursion.
//1+2+3+......n ; n=range

#include <stdio.h>
int sumNature(int);
int main ()
{
    int range;
    printf("Enter the range ");
    scanf("%d",&range);
    printf("The sum is %d",sumNature(range));
}
int sumNature(int n)
{
    if (n==1)
        return 1;
    else
        return n+sumNature(n-1);
}