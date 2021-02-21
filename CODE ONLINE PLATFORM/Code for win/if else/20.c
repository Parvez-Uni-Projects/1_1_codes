/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include <stdio.h>

int main()
{
    int basic,gross;
    printf("Enter the basic salary : ");
    scanf("%d",&basic);

    if (basic<=10000)
    {
        gross=basic + basic*.20 + basic*.8;
    }

    else if (basic<=20000)
    {
        gross=basic + basic*.25 + basic*.9;
    }

    else if(basic>20000)
    {
        gross=basic + basic*.30 + basic*.95;
    }
    
    printf ("The grosss salary is : %.2f",(float)gross);
}