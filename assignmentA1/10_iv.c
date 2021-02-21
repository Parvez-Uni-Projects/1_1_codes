// 1 + x2/2! + x4/4! + x6/6! + .......xn/n!
#include<stdio.h>
#include<math.h>

int main(){
    int n,x;
    float sum=1;
    int sign=1;
    printf("Plese Enter the value of n  ");
    scanf("%d",&n);
    printf("1+\t");
    for(int k=2;k<=n;k++)
    {   
        sign*=-1;
        sum+=sign*(k/((10*k)+1));
        printf("(%d)%d/%d",sign,k,((10*k)+1)); 
        printf("\t"); 
    }
    printf("%.2f",sum);

}