#include<stdio.h>
int main()
{
    int i,num,temp,rem,fac,sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    temp=num;

    for(temp=num; temp>0; temp=temp/10)

    {
        fac=1;
        rem=temp%10;


   for(i=1;i<=rem; i++)
   {

       fac*=i;

   }
     printf("\nFactorial of %d is %d", rem,fac);

     sum=sum+fac;

    }

    if(num==sum)
    printf("\n%d number is Strong Number", num);
    else
        printf("\n%d is not a Strong Number",num);
    return 0;
}