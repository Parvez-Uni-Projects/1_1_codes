//Write a recursive function that can reverse a number given as input. 

#include <stdio.h>
int reverse(int);
int power(int,int);
int count(int);
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    printf("The reverse number is %d",reverse(num));

}

int reverse(int num)
{
    if (num==0)
        return 0;
    else 
        return ((num%10)*(power(10,(count(num))-1)) + reverse(num/10));
}
int power(int num, int num1)
{   if (num1==0)
        return 1;
    else
        return num*power(num,num1-1);
}
int count(int num)
{
    if (num==0)
        return 0;
    else
        return 1+ count(num/10);
}

