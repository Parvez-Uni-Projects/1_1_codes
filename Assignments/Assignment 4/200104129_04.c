/*4. Write a program which receives 5 integers and returns the sum , average and  
standard deviation of these numbers. Call this function from main() and print  the results in main(). */

#include <stdio.h>
#include <math.h>

float isSum (int,int,int,int,int); //defining the functions
float isAver(int,int,int,int,int);
float isSD(float,float,float,float,float);
float isPower(float,int);

int main()
{
    int i,num1,num2,num3,num4,num5;
    printf("Enter 5 integers: ");       ///taking the inputs from the user 
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    printf("\nThe sum of 5 number is %.2f", isSum(num1,num2,num3,num4,num5));  //printing the values
    printf("\nThe average of 5 number is %.2f", isAver(num1,num2,num3,num4,num5));
    printf("\nStandard Deviation = %.4f", isSD((float) num1,(float) num2,(float) num3,(float) num4,(float) num5));
}

float isSum(int a,int b,int c,int d,int e)  //finding the sum of the numbers
{
    int sum;
    sum=a+b+c+d+e;
    return sum;
}

float isAver(int a,int b,int c,int d,int e)  //finding the avarage of the numbers
{
    float aver;
    aver=(isSum(a,b,c,d,e)/5);
    return aver;
}

float isSD(float num1,float num2,float num3,float num4,float num5)
{
    int sum;
    float mean;
    sum=isSum(num1,num2,num3,num4,num5);
    mean=isAver(num1,num2,num3,num4,num5);
    float snum1=(isPower((num1-mean),2));
    float snum2=(isPower((num2-mean),2));
    float snum3=(isPower((num3-mean),2));
    float snum4=(isPower((num4-mean),2));
    float snum5=(isPower((num5-mean),2)); //finding (a-b)^2 for tll the values and keeping them separate variables


    float snumall=snum1+snum2+snum3+snum4+snum5;  //doing the summation according the equation 

    float sd=sqrt(snumall/5); //doing the sqrt 
    return sd;

}

float isPower(float x,int y) //finding the power of 2 values 
{
    float pow=1,i;
    for(i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}
    
