//Write a program to swap the values of two variables using call by reference.
#include <stdio.h>
int swap (int*,int*); //DECLARING A FUNCTION AND CALLING BY REFERENCE 

int main ()

{
    int num1,num2;
    
    printf("Enter the value of A and B "); //TAKING THE INPUT FROM THE USER
    scanf("%d%d",&num1,&num2);

    printf("Before swapping A=%d b=%d\n",num1,num2); //PRINTING A LINE

    swap(&num1,&num2); //CALLING THE FUNCTION
    printf("After  swapping A=%d b=%d",num1,num2);

}
int swap(int *num1,int *num2) //CREATING THE FUNCTION 
{
    int temp;
    temp=*num1; //TEH VALUE IS SWAPPING IN THE POINTERS SO NO RETURNING IS NEEDED IN THIS WAY WE CAN RETRUN MULTIPLE VALUE FROM A SINGLE FUNCTION
    *num1=*num2;
    *num2=temp;
}