#include <stdio.h>
int main ()
{
    int n1,n2,min,i,sum=0;//declaring the variables

    scanf("%d%d",&n1,&n2); //scanning the input

    min = (n1<n2 ? n1 :n2 );
    
    for (i=1;i<=min ;i++) //initiating the loop for finding common factors
        {
            if( n1%i == 0 && n2%i == 0 ) //the logic for findig the common factor 
                {
                    sum+=i;//finding the sum of the common factor 
                    printf("%d ",i); //output
                }     
        }
    printf("\n%d",sum);//output
    return 0;
}