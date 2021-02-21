#include <stdio.h>
float main ()

{
    float temp,cent; //declaring the valeus
    printf("Temperature in Farenheit degree:");
    scanf("%f", &temp);

    cent= (temp-32)*.55 ;//converting the farenheit  value into centigrade using F=9/58c+32

    //printf("%f",cent);

    if(cent>=40)    //checkcing the conditions
        printf("Very hot weather");
    else if(30<=cent&& cent<=40)
        printf("Hot weather");
    else if(20<=cent&&cent<=30)
        printf("Normal in temp");
    else if(10<=cent && cent<=20)
        printf("Cold weather");
    else if(0<=cent && cent<=10)
        printf("Very cold weather");
    else if(cent<=0)
        printf("Freezing weather");   
}