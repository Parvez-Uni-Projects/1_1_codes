/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a
program to convert this temperature into centigrade degrees.*/

#include<stdio.h>
float main ()
{

    float temp;
    printf("Temperature in Farenheit degree:");
    scanf("%f", &temp);

    printf("Temperature in centigrade degree : %.2f\n", (temp-32)*.55 );
    printf("Temperature in kelvin degree : %.2f\n", (temp-32)*.55+273.15 );


    // printf("Temperature in centigrade degree : %.2f\n", (temp-32)*(5/9) );
    //why doesnt this work


}
