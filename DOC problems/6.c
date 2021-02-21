/*The distance between Dhaka and Rajshahi (in km) is input through keyboard.
Write a program to convert and print this distance in meters, feet, inches and
centimeters.*/

#include<stdio.h>
int main()
{
    int dis; 
    printf ("Enter the distance: ");
    scanf("%d", &dis);
    printf("In meter: %d\n", dis*1000); //finding the value in meter
    printf("In centimeter: %d\n", dis*10000); //finding the value in centimeter
    printf("Feet: %.2f\n", (float)dis*3280.84);
    printf("Inch: %.2f\n", (float)dis*39370.1);
    return 0 ;
}
