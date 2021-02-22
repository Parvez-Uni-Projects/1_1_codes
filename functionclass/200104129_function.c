#include <stdio.h>
#include<math.h>
void addition();
void substraction();
void division();
void multiplication ();


void main ()
{
    int ch ;
    printf("Enter choice : 1 for addition,2 for substraction,3 for division,4 for multiplication: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        addition();
        break;
    case 2:
        substraction();
        break;
    case 3:
        division();
        break;
    case 4:
        multiplication();
        break;
    default:
            printf("Enter a valid value");   
        break;
    }   
}

void addition()
    {
        int a,b;
        printf("Enter a and b: ");
        scanf("%d%d",&a,&b);
        printf("Result= %d",a+b);
    }
void substraction()
    {
        int a,b;
        printf("Enter a and b: ");
        scanf("%d%d",&a,&b);
        printf("Result= %d",a-b);
    }
void division()
    {
        int a,b;
        printf("Enter a and b: ");
        scanf("%d%d",&a,&b);
       // float div=a/b;
        printf("Result= %.2f",(float)a/b);
    }
void multiplication()
    {
        int a,b;
        printf("Enter a and b: ");
        scanf("%d%d",&a,&b);
        printf("Result= %d",a*b);
    }