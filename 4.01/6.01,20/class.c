#include<stdio.h>
int main()
{
    int n1,n2,res;

    scanf("%d%d",&n1,&n2);

    if (n1>n2)
    res=n1-n2;

    if (n2>n1)
    res=n2-n1;

    printf("printf=%d",res);


}