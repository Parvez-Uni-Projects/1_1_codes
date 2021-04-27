#include <stdio.h>
#include <math.h>

int main()
{   int a;
    scanf("%d",&a);
    int fdigit,ldigit,temp,count=0,sum=0;
    ldigit=a%10;//get last digit
    temp=a;//storing a value to temp
    while(temp!=0){
        fdigit=temp%10;
        temp/=10;
        count++;
    }
    a=(a-fdigit*pow(10,count-1))/10;
    sum=ldigit*pow(10,count-1)+a*pow(10,count-4)+fdigit;
    printf("%d",sum);
    return 0;
}