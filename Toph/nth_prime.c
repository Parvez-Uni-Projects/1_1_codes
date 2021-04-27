#include <stdio.h>
int main ()

{
    int pos,count=0,i,j,k,isPrime=1;
    scanf("%d",&pos);

        for(i=1,j=1;i<=pos;j++)
            {
                    for(k=2;k<=j/2;k++)
                    {
                        if(j%k==0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                    if(isPrime == 1 && j > 1)
                    i++;  
            }
            printf("%d",i);
            return 0;
}