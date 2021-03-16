#include<stdio.h>
void natural(int,int);
int main()
{
    int ll,ul;

    printf("Enter the upper limit and lower limit ");
    scanf("%d%d",&ll,&ul);
    
    natural(ll,ul);
}
void natural(int ll,int ul)
{
    if(ll>ul)
        return;
    printf("%d\t",ll);
    
    natural(ll+1,ul);
}