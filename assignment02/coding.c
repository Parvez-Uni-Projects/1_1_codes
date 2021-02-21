#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int m,n,i,ctr,j;
    
    printf("Enter the two values: ");
    scanf("%d%d",&m,&n);
     
    for (i=m ; i <=n ; i++)
      {
    ctr=0;
    for(j=2;j<=i/2;j++)
        {
            if(i%j==0) 
            {
                ctr++;
                break;
            }
        }
        if (ctr==0 && i!= 1)
        printf("%d\n",i);
      }
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
