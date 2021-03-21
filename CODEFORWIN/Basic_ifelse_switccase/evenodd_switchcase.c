/*C program to check whether number is EVEN or ODD using switch.*/
 
#include <stdio.h>
int main()
{
    int num;                    //declaring the variables
     
    printf("Enter a positive integer number: "); //taking input from the user
    scanf("%d",&num);
     
    switch(num%2)               //mod of the number will return either 0 or 1
    {
        case 0:              //if the result is 0 this will execute
            printf("%d is an EVEN number.\n",num);
            break;
        case 1:             //if the result is 1 this will execute
            printf("%d is an ODD number.\n",num);
            break;
    }
}