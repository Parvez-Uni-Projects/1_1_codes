// 3 5 9 17 33
#include <stdio.h>
#include<math.h>

int main ()
{
    int i,n,m=2,res;
    printf("Enter a value ");
    scanf("%d",&n);

    for (i=0 ; m<n ; i++)
    {  
        res=pow(2,i);
        m=m+res;
        if(m<n)
            printf("%d\t",m);   
    }
}
