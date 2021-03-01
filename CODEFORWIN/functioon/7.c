//Write a C program to print all strong numbers between given interval using functions.

#include <stdio.h>
#include <math.h>
int strong();
int fact();
int main()
{
    int ll,ul,temp;
    printf("Enter the lowe limit and upper limit : ");
    scanf("%d%d",&ll,&ul);
    for(ll;ll<=ul;ll++)
     {
         if(strong(ll)==ll)
            printf("%d\t",ll);
     }
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