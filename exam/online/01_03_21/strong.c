//Write a C program to print all strong numbers between given interval using functions.

#include <stdio.h>
#include <math.h>
int strong();
int fact();
int main()
{
    int num,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
   
         if(strong(num)==num)
            printf("%d is strong number \t",num);
        else
         printf("%d is not strong number \t",num);  
}
int strong (int x)
{
    int temp2,i=0,digit,sum=0,input; 
    input=x;
    for(;x>0;)
    {
        digit=x%10;
        x/=10;
        sum= sum + fact(digit);
    }
    return sum;
}
int fact(int x)
{
    int f=1,j;
    for(j=1;j<=x;j++){
        f*=j;      
    }
    return f;
}