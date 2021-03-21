#include<stdio.h>
int main()
{
    int i,mainnum,num1,num2,num3,sum,totalsum,fac1,fac2,fac3;

    printf("Enter an integer number: ");
    scanf("%d",&mainnum);
    totalsum=mainnum;
    num1=mainnum%10;
    num2=(mainnum/10)%10;
    num3=(mainnum/100)%10;
    //printf("%d%d",num1,num2);

    fac1=1;
    for(i=1;i<=num1;i++)
    {
        fac1=fac1*i;
    }
    //printf("%d",fac1);
    fac2=1;
    for(i=1;i<=num2;i++)
    {
        fac2=fac2*i; 
    }
    fac3=1;
    for(i=1;i<=num3;i++)
    {
        fac3=fac3*i;
    }
    if (fac2==1)
    {
        sum=fac1;
    }
    else if(fac3==1)
     {
        sum=fac1+fac2;
    }
    else if(fac3>1 && fac2>1)
    {
        sum=fac1+fac2+fac3;
    }
  // printf("%d",sum);
  if (sum==mainnum)
   {
      printf("%d is a strong number",mainnum);
   }
   else
   {
       printf("%d is a not strong number",mainnum);
   }
}