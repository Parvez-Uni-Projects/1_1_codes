//3^3 + 6^3 + 9^3 ...(3n)^3

#include <stdio.h>
int isqubic(int);
int main()
{
    int n,i,sum=0,j=0;
    
    printf("Enter the value of n ");
    scanf("%d",&n);
    
    for(i=3;i<=(3*n);i+=3)
    {
        sum+=isqubic(i); 
    }
    printf("The sum of the series is %d ",sum);
}
int isqubic(int x)
{
    int qubic;

    qubic=x*x*x ;
    return qubic;
}