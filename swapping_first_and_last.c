#include <stdio.h>
int isPower(int,int);
int main ()
{
    int num,i,j,count=0,input,swapped=0;
    scanf("%d",&num);
    input=num;
    for(;num>0;)
        {
            num=num/10;
            count++;
        }
    int digit[count],sum[count];
    for(i=count;input>0;i--) 
    { 
        digit[i]=input%10;
        input/=10;  
    }
    sum[count]=digit[count]*isPower(10,count-1);  
    sum[1]=digit[1];
    for(i=2,j=count-2;i<count;i++,j--)  sum[i]=digit[i]*isPower(10,j);     
    for(i=count;i!=0;i--) swapped+=sum[i];
        printf("\nswapped value is %d",swapped);
}
int isPower(int x,int y)
{
    int pow=1,i;
    for(i=1;i<=y;i++) pow*=x;
    return pow;
}