// Write a program to calculate sum and average using call by reference
#include <stdio.h>
int sumTwo(int,int,int*,float*);
int main ()
{
    int num1,num2,sum;
    float aver;

    printf("Enter two numbers ");
    scanf("%d%d",&num1,&num2);

    sumTwo(num1,num2,&sum,&aver);

    printf("The sum is %d ",sum);
    printf("The sum is %2f ",aver);


}
int sumTwo(int num1,int num2,int *sum,float *aver)
{
    *sum=num1 + num2;
    *aver=(float) *sum/2;
}