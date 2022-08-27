#include <stdio.h>

int diameter();
float circumference();
float area();

int main ()
{
    int rad;

    printf("Enter the radius of the circle: ");
    scanf("%d",&rad);

    printf("Diameter %d \t Circumference %.4f \t area %.4f",diameter(rad),circumference(rad),area(rad));
}
int diameter(int x)
{
    int diam;
    diam=x*2;
    return diam;
}

float circumference(int x)
{
    float circum;
    circum=2*3.1416*x;
    return circum;
}
float area(int x)
{
    float area;
    area=3.14168*x*x;
    return area;
}