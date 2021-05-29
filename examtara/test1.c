#include <stdio.h>
int isPower(int,int);
int main ()
{
    int n,i,j;
    float sum=0;
    scanf("%d",&n);

    for (i=1;i<=n;i++)
        {
            sum+= 1.0/(isPower (10,i) -i);
            printf("1/%d\t",(isPower (10,i) -i)) ;        
        }
        printf("\n%f\n",sum);   
        return 0;
}
int isPower(int x,int y)
{
    int pow=1,i;
    for(i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}