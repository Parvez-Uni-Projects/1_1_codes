#include <stdio.h>
int fact(int);
int main ()
{
    int num=5;
    
    printf("%d",fact(num));
}

int fact (int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}