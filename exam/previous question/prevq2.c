#include<stdio.h>
#define L (2)
#define SUM ((L)+(L))

int main ()

{

    int y=8;
    y += SUM*SUM;
    printf("%d\n",y);
    return 0;
}
