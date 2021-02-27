#include<stdio.h>
#include<math.h>
int main()
{                       //1+x^/2!+x^4/4!+...+x^n/n!
    int i,n,j,y=2;
    float x,fac=1,sum=1;

    printf("Enter the value of x and n: ");
    scanf("%f%d", &x,&n);

   for(i=1; i<n; i++)
   {
     fac=1;
     for(j=1;j<=y;j++)
     {
         fac*=j;
     }
     sum=sum+(pow(x,y)/fac);
     y+=2;
   }
   printf("The sum of the series  %.2f", sum);
    return 0;
}
