#include<stdio.h>
int natural(int,int);
int main()
{
    int ll,ul;

    printf("Enter the upper limit and lower limit ");
    scanf("%d%d",&ll,&ul);
    
    natural(ll,ul);
}
int natural(int ll,int ul)
{   
    int i;
    if(ll>ul)
        return 0;
    printf("%d\t he\t",ll);
    natural(ll+1,ul);
}