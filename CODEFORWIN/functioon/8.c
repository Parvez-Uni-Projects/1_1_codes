//Write a C program to print all Armstrong numbers between given interval using functions.
#include <stdio.h>
#include<math.h>
int armstrong(int);
int power1(int ,int);
int main()
{
    int ll,ul,temp;
    printf("Enter the lower and upper limit");
    scanf("%d%d",&ll,&ul);

    for(ll;ll<=ul;ll++)
     {
         if(armstrong (ll)==ll)
         printf("%d\t",ll);
     }
}
int armstrong (int x)
{
    int i=0,digit,sum=0,input;
    
    input=x;
    for(;x>0;)
    {
        i++;
        x/=10;
    }
  //printf("Value of I %d\t",i);
    x=input;
    for(;x>0;)
    {
        digit=x%10;
        x/=10;
        sum+=power1(digit,i);
    }
    return sum;
}

int power1(int x , int n)
{
    int power=1,i;
    for (i=1;i<=n;i++)
    {
        power*=x;
    }
    return power;
}