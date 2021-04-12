#include <stdio.h>
int isStrong(int);
int fact(int);

int main ()
{
    int ll,ul,i;

    scanf("%d%d",&ll,&ul);

    for(i=ll;i<=ul;i++)
    {
        if(isStrong(i))
            {
                printf("%d\n",i);
            }
    }
    //printf("%d %d",ll,ul);
}


int isStrong(int x)
{
    int temp2,i=0,digit,sum=0,input; 
    input=x;
    for(;x>0;)
    {
        digit=x%10;
        x/=10;
        sum= sum + fact(digit);
    }
    if (sum==input)
    return 1;
    else 
    return 0;
}

int fact(int x)
{
    int fac=1,i;
    for(i=1;i<=x;i++)
        fac*=i;
    return fac;
}