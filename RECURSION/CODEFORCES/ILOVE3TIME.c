#include <stdio.h>
int repeat(int);
void main ()

{   int n;
    scanf("%d",&n);
    repeat(n);
}

int repeat(int n)
{
    if(n==0)
        return 0;
    else
    {
        printf("I love Recursion\n");
         return repeat(n-1);    
    }
       
}

