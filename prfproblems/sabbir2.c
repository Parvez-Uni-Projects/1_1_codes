#include <stdio.h>
int main()
{
    int i,num,sum=0;

    printf("Enter the value of n ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum= sum + (i*3);

        printf("%d.%d\t",i,3);
        printf("sum is %d\t",sum);
    }
  
}
