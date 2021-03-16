//Write a C program to find sum of all even or odd numbers in given range using recursion.
#include<stdio.h>
int evensum(int,int);
int oddsum(int,int);
int main()
{
    int ll,ul,llo;
    printf("Enter the upper limit and lower limit "); //if ll is odd the output will be odd if ll is even the output will be odd series
    scanf("%d%d",&ll,&ul);  
    if (ll%2==1)
    {   if(ul%2==1)
            ul=ul;
        else
            ul-=1;
        printf("The sum of odd numbers is %d",oddsum(ll,ul));
    }    
    else
    {
        if(ul%2==0)
            ul=ul;
        else
            ul-=1;
        printf("The sum of even numbers is %d",evensum(ll,ul));
    }  
}
int evensum(int ll,int ul)
{
    if (ul==ll)
        return ul;
    else
        return ul+evensum(ll,ul-2);
}

int oddsum(int ll,int ul)
{
    if (ul==ll)
        return ul;
    else
        return ul+oddsum(ll,ul-2);
}


