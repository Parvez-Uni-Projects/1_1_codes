//Write a C program to print all perfect numbers between given interval using functions.

#include <stdio.h>
int perfect(int);
int iseven(int);
int main ()
{
    int ll,ul,temp;
    printf("Enter the upper and lower limit "); 
    scanf("%d%d",&ll,&ul); 
    for(ll;ll<=ul;ll++)
     {
         if(perfect(ll))
            printf("%d\t",ll);
     }

    /*for(ll;ll<=ul;ll++)
     {
         if(iseven(ll))
            printf("%d\t",ll);
     }*/
}

int perfect (int x)
{
    int i,sum=0;     
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }   

    if(sum==x)
        return 1;
    else
        return 0;
}

int iseven(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}