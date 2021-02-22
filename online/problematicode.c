#include<stdio.h>
#include<math.h>
int main()
{                           
     int x,i,n,j,y=2,fac=1;
    float sum=1;

    printf("Enter the value of x and n: ");
    scanf("%d%d",&x,&n);

   for(i=1; i<=n; i++)
   {
       fac=1;
     for(j=1;j<=y;j++)
     {
         fac*=j;
     }
     sum+=(pow(x,y)/fac);
     y+=2;
     
   }

   printf("The sum of the series  %.2f", sum);
    return 0;
}