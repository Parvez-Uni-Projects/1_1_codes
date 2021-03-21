#include<stdio.h>
int main()
{
    int a=3, b=5, c=0, d;
    d=a++ && b++ || c++;

    printf("%d %d %d %d",a,b,c,d);
    return 0;

}