//Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter teh value of three sides : ");
    scanf("%d%d%d",&a,&b,&c);

    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf("The values are valid ");
    }
    
    else if (a==b==c)
    {
        b=++b ;
        c=++c;
        c=++c;
        printf("THe values are not valid");
        printf("One of the closest value %d %d %d",a,b,c);
    }
}