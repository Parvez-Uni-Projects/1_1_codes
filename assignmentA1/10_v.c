// 1 + x2/2! + x4/4! + x6/6! + .......xn/n!
#include<stdio.h>
#include<math.h>
int fact(int x)
{
    int f=1;
    for(int j=1;j<=x;j++){
        f*=j;
    }
    return f;
}
int main(){
    int n,x;
    float sum=1;
    printf("Plese Enter the value of n and x ");
    scanf("%d%d",&n,&x);
    printf("1+\t");
    for(int k=2;k<=n;k+=2)
    {   
        sum+=((pow(x,2*k))/fact((k)));
        printf("%d^%d/%d!\t",x,2*k,k);  
    }
    printf("\t %.2f",sum);
}

