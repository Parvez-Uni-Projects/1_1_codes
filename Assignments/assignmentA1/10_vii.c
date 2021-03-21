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
    printf("x+\t");
    for(int k=2;k<=n;k++)
    {   
        sign*=-1;
        sum+=sign*((pow(x,k))/fact(((2*k)-1)));
        printf("(%d)%d^%d/%d!\t",sign,x,k,(2*k-1));  
    }
    printf("\t %.2f",(sum+x));

}