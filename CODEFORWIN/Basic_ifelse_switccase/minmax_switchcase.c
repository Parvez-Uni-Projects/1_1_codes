/*Two numbers are input through keyboard. 
Write a program to find out the maximum and minimum of these 2 numbers*/


#include<stdio.h>
int main()
{
   int num1,num2; //declaring the variables

    printf("Enter the first value: "); //taking inputs from the user
    scanf("%d",&num1);

    printf("Enter the second value: "); //taking inputs from the user
    scanf("%d",&num2);

    //the (num1>num2) will return true or false so the returned value will be 1 or 0
    switch(num1 > num2)
    {   
        // if the condition (num1>num2) is false
        case 0: 
            printf("The maximum value is %d\n", num2);
            break;

        // if the condition (num1>num2) is true
        case 1: 
            printf("The maximum value is %d\n", num1);
            break;

      
    }

    //the (num1<num2) will return true or false so the returned value will be 1 or 0
    switch(num1 < num2)
    {   
        //if the condition (num1<num2) is false 
        case 0: 
            printf("The minimum value is %d\n", num2);
            break;

        // if the condition (num1<num2) is true
        case 1: 
            printf("The minimum value is %d\n", num1);
            break;

  

    return 0;
    }

}