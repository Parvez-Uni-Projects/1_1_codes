//Write a C program to input month number and print number of days in that month.

#include <stdio.h>
int main ()
{
    int month;
    printf("Input the number of the month ");
    scanf("%d",&month);

    if (month==1)
    {
        printf("The Month is january and day in month is 31");
    }
    else if (month==2)
    {
        printf("The Month is February and day in month is 28 ");
    }
    else if (month==3)
    {
        printf("The Month is march and day in month is 31 ");
    }
    else if (month==4)
    {
        printf("The Month is April and day in month is 30 ");
    }
    else if (month==5)
    {
        printf("The Month is May and day in month is 31 ");
    }
    
    else if (month==6)
    {
        printf("The Month is June and day in month is 31 ");
    }
    
    else if (month==7)
    {
        printf("The Month is July and day in month is 30 ");
    }
    
    else if (month==8)
    {
        printf("The Month is August and day in month is 31 ");
    }
    
    else if (month==9)
    {
        printf("The Month is september and day in month is 30 ");
    }
    
    else if (month==10)
    {
        printf("The Month is October and day in month is 31 ");
    }
    
    else if (month==11)
    {
        printf("The Month is November and day in month is 30 ");
    }
    else if (month==12)
    {
        printf("The Month is December and day in month is 31 ");
    }
    else
    {
        printf("Enter a number between 1-12 ");
    }
    
    
}