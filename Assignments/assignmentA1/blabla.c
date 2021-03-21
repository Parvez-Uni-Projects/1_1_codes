#include<stdio.h>
#include<math.h>
int main()
{                                      //1 – (x2 / 2 !) + (x4 / 4 !) – (x6 / 6 !) +…

    int i,n,j,sign=1,y=2;
    float fac=1,sum=1,x,t;

    printf("\n Enter The Value of x and n: ");
    scanf("%f%d", &x,&n);
    for(i=1; i<n; i++)
    {
       fac=1;
        for(j=1; j<=y; j++)
        {
          fac*=j;
        }
      sign=sign*(-1);
      t=sign* (pow(x,y)/fac);
      sum=sum+t;
      y+=2;
    }
    printf("The sum of the series %.2f",sum);
   return 0;

}