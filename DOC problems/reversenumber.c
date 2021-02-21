#include<stdio.h>
int main()
{
  int num,reverse,l,lm,m,fm,f,dif,sum;

  printf("enter teh 5 digit number: ");
  scanf("%d", &num);

   l = num%10;
   lm = (num/10) %10;
   m = (num/100)%10;
   fm = (num/1000)%10;
   f = (num/10000)%10;

    reverse= l*10000 + lm*1000 + m*100 +fm*10 + f ;

    printf("The reverse value is: %d \n",reverse);

    dif=reverse-num;//finding the difference of the value and the given value
    sum=reverse+num ;//finding the summation of the reverse value and the given vvalue

    printf("The value difference is: %d\n",dif);
    printf("The value summation is: %d\n",sum);
   // printf("the reverse value is : %d%d%d%d%d" ,l,lm,m,fm,f);

   if (num==reverse)
   {
       printf("Numbers are equal");
   }
   else
   {
        printf("Numbers are not equal");
   }
   
  return 0;
}