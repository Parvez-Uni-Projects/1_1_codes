//Write a program to swap the values of two variables using call by reference.
#include <stdio.h>
int swap (int*,int*);

int main ()

{
    int num1,num2;
    
    printf("Enter the value of A and B ");
    scanf("%d%d",&num1,&num2);

    printf("Before swapping A=%d b=%d\n",num1,num2);

    swap(&num1,&num2);
    printf("After  swapping A=%d b=%d",num1,num2);

}
int swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}