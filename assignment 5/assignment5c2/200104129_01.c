//Write a function that can generate the Sum of Even Numbers Using Recursion. Like- 2+4+6+8+..........+ n = sum
#include <stdio.h>
int evenSum(int);
int main ()
{
    int num;
    printf("Enter the last value ");
    scanf("%d",&num);

    printf("The sum is %d",evenSum(num));
}

int evenSum(int num)
{   
    int i=2,sum=0;
    for(i=2;i<=num;i+=2)
    {
        sum+=i;
    }
    return sum;
}