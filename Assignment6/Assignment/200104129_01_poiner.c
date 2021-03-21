// Write a program to calculate sum and average using call by reference
#include <stdio.h>
int sumTwo(int,int,int*,float*); //defining the function 
int main ()
{
    int num1,num2,sum; //declaring the variables
    float aver;

    printf("Enter two numbers "); //taking the input from the users
    scanf("%d%d",&num1,&num2);

    sumTwo(num1,num2,&sum,&aver); //calling the functions 

    printf("The sum is %d ",sum); //printing the value of sum
    printf("The sum is %2f ",aver); //printing the value of average


}
int sumTwo(int num1,int num2,int *sum,float *aver)  //there isn a return value we are doing it using pointer and altering teh value of the memory address
{
    *sum=num1 + num2;
    *aver=(float) *sum/2;
}