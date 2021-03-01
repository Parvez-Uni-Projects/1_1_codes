#include<stdio.h>
#include <math.h>
int main ()
{
    int num1=371,i=0,digit,sum=0,input;
    input=num1;
    for(;num1>0;)
    {
        i++;
        digit=num1%10;
        num1/=10;
        printf("%d\t",digit);
    }
    printf("Value of I %d\t",i);

    num1=input;
    for(;num1>0;)
    {
        digit=num1%10;
        num1/=10;
        sum= sum + (pow(digit,i));
    }
    printf("%d is the sum\t",sum);

    if(input==sum)
    printf("pera nai chill");
    else
    printf("pera ache tobuo chillll");
}