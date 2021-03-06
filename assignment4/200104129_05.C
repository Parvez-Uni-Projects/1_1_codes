/*5. Write a function which receives a float and an int from main(), 
finds the  product of these two and returns the product which is printed in the  main().*/

#include <stdio.h>
float productres(int,float);

int main()
{
    int num1;
    float num2;

    printf("Enter an integer value: ");
    scanf("%d",&num1);
    printf("Enter an float value : ");
    scanf("%f",&num2);

    printf("The product of %d and %.4f is %.4f",num1,num2,productres(num1,num2));
    
    return 0;
}
float productres(int x, float y)
{
    return x*y;
}
