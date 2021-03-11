#include <stdio.h>
int power(int,int);
int main()
{
    int num=2,pow=3;

    printf("%d",power(num,pow));
}
int power(int num, int pow)
{
    if(pow==0)
        return 1;
    else
        return num*power(num,pow-1);
}