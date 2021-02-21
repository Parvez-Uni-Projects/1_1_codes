/*The length and height of a rectangle and radius of a circle are input through the
keyboard. Write a program to find the area & perimeter of the rectangle and the area
& circumference of the circle.*/


#include  <stdio.h> //including header files//
#define PI 3.1415 //macro definition
int main()
{
    float radius, area, circum;     //declaring variables
    printf("Enter the radius: ");
    scanf("%f", &radius);

    int len, hei, peri, rarea;
    printf("Enter the length: \n");
    scanf("%f", &len);
    printf("Enter the height: \n");
    scanf("%f", &hei);

    //perimeter
    peri=2*(hei+len);
    //rectangles area
    rarea=hei*len;
    // circles area
    area = PI*radius*radius;
    // circles circumference
    circum=2*PI*radius;

    printf(" Rectangles Perimeter=%f\n", hei*len);
    printf(" Rectangles Area=%d\n", hei*len);
    printf(" Circles Area=%.2f\n",area);
    printf(" Circles Circumference=%.2f\n",circum);

    return 0;
}