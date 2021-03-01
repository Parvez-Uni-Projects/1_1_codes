//Write a C program to print all perfect numbers between given interval using functions.

#include <stdio.h>
int perfect();
int main ()
{
    int num,temp;
    printf("Enter the number ");
    scanf("%d",&num);

    if (perfect(num))
        printf("%d is a perfect number ",num);
    else
         printf("%d is a not perfect number ",num);
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