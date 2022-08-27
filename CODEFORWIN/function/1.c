#include <stdio.h>
#include <math.h>

int cubiq(int x)
{
    int cube=1;
    cube=x*x*x;
                    //why isn't pow (x,3 )working??
    return cube;
}

int main ()
{
    int x,cube=1;
    printf("Enter a number to find the cube : ");
    scanf("%d",&x);

    cube= cubiq(x);

    printf("The cube is %d",cube);
}