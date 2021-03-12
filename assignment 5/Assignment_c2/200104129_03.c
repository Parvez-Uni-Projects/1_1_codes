//Write a recursive function to calculate the sum of digits of the number given as input.

#include <stdio.h>
int sum(int); //defining the sum function
int main ()
{
    int n1;

    printf("Enter theree numberes "); //taking the input fromm the user
    scanf("%d",&n1);

    printf("The sum of the number is %d",sum(n1)); //getting the value from the sum function
}

int sum(int n1) //creating the sum function to find the sum of teh digits
{
    if (n1==0) //this is the stop condition
        return 0;
    else 
        return (n1%10) + sum(n1/10); //base condition or the algorithm to solve the problem
}