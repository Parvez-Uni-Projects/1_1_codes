//Write a recursive function that can reverse a number given as input. 

#include <stdio.h>
int isPower(int,int);
int reverse(int);
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    printf("The reverse number is %d",reverse(num));

}

int reverse(int x)
{
    int i=0,digit,sum=0,input; 
    input=x;
    for(;x>0;)
    {
        i++;
        digit=x%10;
        x/=10;
    }
    for(;input>0;)
    {
        digit=input%10;
        input/=10;
        i--;
        sum+=(digit*isPower(10,i));
    }
    return sum;
}

int isPower(int x,int y)
{
    int pow=1,i;
    for(i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}