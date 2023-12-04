#include <stdio.h>
int main ()
{
    int a ,i ;

    for (a=0,i=0; i<7 ;i-=3,--i,i++)
    {
        i =i+3 ;
        i+=2;
        a =a + i;

    }
    printf ("i = %d ,a =%d\n",i,a);
}