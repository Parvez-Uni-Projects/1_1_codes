//Write a function that can generate the Sum of Even Numbers Using Recursion. Like- 2+4+6+8+..........+ n = sum
#include <stdio.h>
int evenSum(int);
int main ()
{
    int num,num1;
    printf("Enter the last value ");    
    scanf("%d",&num);

    if (num%2==0)   
        num1=num;
    else
        num1=num-1;
    printf("The sum is %d",evenSum(num1)); 
}
int evenSum(int num1)
{
    if(num1==2)
        return 2;
    else
        return num1 +evenSum(num1-2);
}
