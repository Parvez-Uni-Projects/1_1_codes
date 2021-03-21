//Find out the sum of the following series. n is the input from user for series  1 + 2^2/2!+!3^2/3!+ ... + n^2/n!

#include<stdio.h>
int main ()
{
    float i, n, x, fac=1, res=0; // declaring the variables
    printf("Enter the value of n: ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        fac=fac*i;
        x=i*i; //square
        res=res+(x/fac); //the result
    }
    printf("The sum of the series is %.2f",res); //print out the output
    return 0;
}
