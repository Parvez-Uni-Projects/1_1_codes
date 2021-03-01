//Write a C program to print all perfect numbers between given interval using functions.

#include <stdio.h>
int perfect();
int main ()
{
    int ll,ul,temp;
    printf("Enter the upper and lower limit ");
    scanf("%d%d",&ll,&ul);

    for(ll;ll<=ul;ll++)
     {
         temp= perfect(ll);
         if(perfect(ll)==ll)
            printf("%d\t",ll);
     }
}

int perfect (int x)
{
    int temp3,i,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    return sum;
}