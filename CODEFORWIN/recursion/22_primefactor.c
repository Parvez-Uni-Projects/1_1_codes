#include <stdio.h>
void primefac(int,int);
int main ()
{
    int num1;

    printf("Enter a number : ");
    scanf("%d",&num1);


    primefac(num1,2);
}
void primefac(int num1,int num2)
{ 
    /*if(num1==1)
        printf("No prime factor available");
    else */if (num1%num2==0)
    {
        printf("%d",num2);
        primefac(num1/num2,num2);
    }
    else
        primefac(num1,num2+1);
}
