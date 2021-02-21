/*Rahim’s basic salary is input through the keyboard. His House rent allowance is 30%
of basic salary and medical allowance is 5% of basic salary. He gets extra 1000 tk as
technical allowance. Write a program to calculate his gross salary and print the result.*/
#include<stdio.h>
float main()
{
    float basic, gross;
    printf("print your basic : ");
    scanf("%f" , &basic);

    gross=(basic+1000+(basic*.3)+(basic*.05));

    //printf("Gross salary : %.2f" , basic+1000+(basic*.3)+(basic*.05) );

    printf("Gross salary : %.2f" , gross );
    return 0 ;
}
