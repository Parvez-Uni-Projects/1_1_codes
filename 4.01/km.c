#include <stdio.h>

float main ()
{
    float dis;



    printf ("Enter the distance: ");
    scanf("%f" , &dis);


    printf("In meter: %.2f\n", dis*1000);
    printf("Feet: %d\n", dis*3280.84);
    printf("Inch: %c\n", dis*39370.1);

    return 0;
}