//Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int main ()
{
    int ang1,ang2,ang3;

    printf("Input the three angles : ");
    scanf("%d%d%d",&ang1,&ang2,&ang3);

    if ((ang1+ang2+ang3)==180)
    {
        printf("THe angels are valid ");
    }

    else
    {
        printf("THe angles are not valid");
    }
    
}