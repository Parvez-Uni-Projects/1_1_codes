//Write a function that can generate the Sum of Even Numbers Using Recursion. Like- 2+4+6+8+..........+ n = sum
#include <stdio.h>
int evenSum(int);
int main ()
{
    int num,num1;
    printf("Enter the last value ");    //taking the input from the user
    scanf("%d",&num);

    if (num%2==0)   //checking if the value user inputted is an even value or not if it ain't an even value then we are dedcuting 1 to make it a even value
        num1=num;
    else
        num1=num-1;
    printf("The sum is %d",evenSum(num1));//using the evenSum function to get the reverse number 
}
int evenSum(int num1) //CREATING THE EVENSUM FUNCTION
{
    if(num1==2)     //THE FUNCTION WILL BREAK WHEN THE VALUE OF NUM1 WILL BE 2 SO THIS IS THE STOP CASE
        return 2;
    else
        return num1 +evenSum(num1-2); //DIVIDING THE PROBLEM INTO 2 PARTS 
}

