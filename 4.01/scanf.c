#include <stdio.h>

int main ()
{
    int n1,n2;
    //n1=4;
    //n2=5;

    printf ("Enter the 1st value");
    scanf("%d" , &n1 );

    printf ("Enter the 2nd value");
    scanf("%d" , &n2 );

    printf("Sum of %d and %d is %d\n" , n1, n2, n1+n2);

    return 0 ;
}