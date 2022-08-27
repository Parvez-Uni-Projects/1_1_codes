#include <stdio.h>


int even_odd_function(int);

int main()
{
    // int a = 5;
    // float b = 5.45;
    // double c =5 ;
    // char d = '5';

    // printf("A = %d \n",a);
    // printf("B = %f \n",b);
    // printf("C = %lf \n",c);
    // printf("D = %c \n",d);
    

    //printf ("Hello World from tanisha") ;

    int tanisha;
    tanisha = even_odd_function(10);
    printf("Retrun = %d",tanisha);

}

int even_odd_function(int x)
{
    return x*5;
}