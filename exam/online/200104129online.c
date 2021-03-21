// 1 + x2/2! + x4/4! + x6/6! + .......xn/n!
#include<stdio.h>
#include<math.h>
int fact(int x){    //user defined function
    int f=1,j=1;
    for( j=1 ;j<=x;j++)
    {
        f*=j;
    }
    return f;
}
int main(){
    int n,x,k;
    float sum=1;
    printf("Please Enter the value of n and x ");
    scanf("%d %d",&n,&x);
    for(k=2;k<=n;k+=2){
        sum+=((pow(x,k))/fact(k));   //formula   
    }
    printf("The sum of the series is %.4f",sum);
}