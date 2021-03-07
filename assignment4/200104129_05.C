/*5. Write a function which receives a float and an int from main(), 
finds the  product of these two and returns the product which is printed in the  main().*/

#include <stdio.h>
float productRes(int,float);
int main()
{
    int num1;
    float num2;

    printf("Enter an integer value: "); //taking an integer input from the user
    scanf("%d",&num1);
    printf("Enter an float value : ");//taking an integer input from the user
    scanf("%f",&num2);

    printf("The product of %d and %.4f is %.4f",num1,num2,productRes(num1,num2)); // printing the result in the main function
    
    return 0;
}
float productRes(int x, float y) //the function to find the product of 2 number here we used float as teh return data type as we are sure to get an float value if we multiply an integer with an float value
{
    return x*y;
}
