#include <stdio.h>
int main ()
{
    int m,n,i,j,count=0,input,sum=0;

    scanf("%d",&n);
    input=n;
    scanf("%d",&m);
    int position[m]; 

    for (i=0;i<m;i++)
        scanf("%d",&position[i]);
    
    for(i=0;n!=0;i++) 
        {   
            n=n/10;
            count++;
        }
    int digit[count];
    for(i=count-1;i>=0;i--)
        {
            digit[i]= input%10 ; 
            input=input/10;
        }

    for(i=0;i<m;i++)
        {
            for(j=0;j<count;j++)   
                if(position[i]==j+1)
                    sum+=digit[j];        
        }

    printf("%d",sum);
    return 0; 
}