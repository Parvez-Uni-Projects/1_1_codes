//print the sum and average of first n odd numbers
#include<stdio.h>
#include<math.h>
int main()
{
     int i,n,sum_odd=0,r=0;

    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; r<n ; i+=2)
    {   
        sum_odd+=i;
        r+=1;  
    }
    //sum_odd= n*n;
  printf("Sum_Odd=%d,avarage odd =%.2f",sum_odd,(float)(sum_odd/n));
   return 0;
}


