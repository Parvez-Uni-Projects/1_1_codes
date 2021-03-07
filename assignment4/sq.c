#include <stdio.h>

float isPower(float,int);
int main ()
{   
    float res=isPower(3.4,2);

    printf("%.2f",res);
    
}

float isPower(float x,int y)
{
    float pow=1,i;
    for(i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}