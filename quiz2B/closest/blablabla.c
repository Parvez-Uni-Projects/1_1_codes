#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int x=sqrt(n)+1;
    for(int i=2;i<=x;i++){
        if(n%i==0)
            return -1;
    }
    return n;
}

int func(int n){
    if(isPrime(n)==n)
        return n;

    int ans1=n,ans2=n;
    while(ans1>1){
        ans1--;
        if(isPrime(ans1)==ans1) break;
    }
    while(1){
        ans2++;
        if(isPrime(ans2)==ans2) break;
    }
    if(n-ans1<ans2-n) return ans1;
    return ans2;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",func(n));
}