// 1 + x2/2! + x4/4! + x6/6! + .......xn/n!
#include<stdio.h>
#include<math.h>
int fact(int x){
    int f=1,j;
    for(j=1;j<=x;j++){
        f*=j;  
       // f=1*2*3*4    =24    
    }
    return f;
}
int main(){
    int n,x,sign,k;
    float sum=0;
    printf("Please Enter the value of x and n ");
    scanf("%d %d",&x,&n);
    //printf("1+");
    for(k=1;k<=n;k+=2)
    {
        sum+=((pow(x,k))/fact(k)); 
       //printf("(%d)%d^%d/%d!\t",sign,x,k,k);  
    }
    printf("\t %.2f",sum);
}

