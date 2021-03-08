#include<stdio.h>

int isStrong(int);
int main()
{
    int ll,ul;
    printf("Enter range: ");
    scanf("%d%d",&ll,&ul);
    for(ll;ll<=ul; ll++)
    {
        if(isStrong(ll))
            printf("%d \t",ll);
    }  
}

int isStrong(int n)
{
   int temp, sum=0,rem;
   temp=n;
   while(temp!=0)
   {
       rem=temp%10;
       int i,fact=1;
       for(i=1;i<=rem;i++)
       {
           fact=fact*i;
       }
       sum+=fact;
       temp/=10;
   }
   if(sum==n)
    return 1;
   else
    return 0;
}
