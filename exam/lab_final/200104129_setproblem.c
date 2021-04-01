#include <stdio.h>
int main ()
{
    int i,n,m,j,sum=0;

    printf("Enter the length of the first array ");
    scanf("%d",&n);

    int A[n];
    int freq[n];

    printf("Enter the element of the first array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        freq[n] =-1;
    }
        

    printf("Enter the length of the second array ");
    scanf("%d",&m);

    int B[m];
    printf("Enter the element of the second array ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&B[i]);  
    }
 
    
        for (i=0;i<n+1;i++)
        {
            freq[i]=-1;
            for (j=0;j<m;j++)
            {
                if (A[i]==B[j])
                {
                      freq[i]=0;
                      sum++;
                      break; 
                }
            }
        }
            
        if (sum==0)
                    printf(" -1 \t");
        else 
        {
            for (i=0;i<n;i++)
            {
                   if (freq[i]!=0)
                    printf("%d \t",A[i]);  
            }       
        }
        
    return 0;
}