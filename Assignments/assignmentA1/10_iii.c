// 1 + x2/2! + x4/4! + x6/6! + .......xn/n!
#include<stdio.h>
#include<math.h>
int fact(int x){
    int f=1;
    for(int j=1;j<=x;j++){
        f*=j;
    }
    return f;
}
int main(){
    int n,x;
    float sum=0;
    int sign=1;
    printf("Plese Enter the value of n and x ");
    scanf("%d%d",&n,&x);
   // printf("x+");
    for(int k=1;k<=n;k+=2)
    {   
        sum+=sign*((pow(x,k))/fact(k));
        printf("(%d)%d^%d/%d!\t",sign,x,k,k);  
        sign*=-1;
    }

    printf("\t %.2f",sum);
}
