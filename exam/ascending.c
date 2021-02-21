#include <stdio.h>
int main ()


{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,num2,num3);

    if      (num1>num2 && num2>num3)
    { 
       printf("The ascending order is : %d %d %d",num1,num2,num3);
    } 
    else if (num2>num1 && num1>num3)
    {
       printf("The ascending order is : %d %d %d",num2,num1,num3);
    }
    else if (num3>num2 && num2>num1)
    {
       printf("The ascending order is : %d %d %d",num3,num2,num1);
    }

    else if (num1>num3 && num3>num2)
    {
       printf("The ascending order is : %d %d %d",num1,num3,num2);
    } 
    else
    printf("The number is invalid");
}



