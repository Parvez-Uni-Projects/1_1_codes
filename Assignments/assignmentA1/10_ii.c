// 1- x2/2! + x4/4! - x6/6! + .......xn/n!
#include<stdio.h>
#include<math.h>
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
    float sum=1;
    int sign=1;
    printf("Plese Enter the value of x and n ");
    scanf("%d %d",&x,&n);
    printf("1+");
    for(int k=2;k<=n;k+=2){
        sign*=-1;
        sum+=sign*((pow(x,k))/fact(k));
        printf("(%d)%d^%d/%d!\t",sign,x,k,k);  
    }
    printf("\t %.2f",sum);

}


