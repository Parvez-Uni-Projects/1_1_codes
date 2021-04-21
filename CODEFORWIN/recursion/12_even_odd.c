#include<stdio.h>
void even(int,int);
void odd(int,int);
int main()
{
    int ll,ul,llo;
    printf("Enter the lower limit and upper limit "); //if ll is odd the output will be odd if ll is even the output will be odd series
    scanf("%d%d",&ll,&ul);
    if (ll%2==1)
        odd(ll,ul);
    else
        even(ll,ul);    
}
void even(int ll,int ul)
{
    if(ll>ul)
        return;
    printf("%d\t",ll);
    even(ll+2,ul);
}
void odd(int ll,int ul)
{
    if(ll>ul)
        return;
    printf("%d\t",ll);  
    odd(ll+2,ul);
}