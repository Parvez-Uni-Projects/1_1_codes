#include <stdio.h>
int main()
{
int m=0,n=1,ne=5,i;
for(i = 1; i<=10 && n<=5 ; i++)
    {
        m += n;
        
        printf("%d X %d = %d\n",n,i,m);
        for(;i==10;)
        {   
            i=0;
            n+=1;
            m=0;
            printf("\n");
        }
        
    }
return 0;
}