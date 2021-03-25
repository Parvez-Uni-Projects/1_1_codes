#include <Stdio.h>
int main ()
{
    int i,index,a[10]={1,2,3,4,5};

    printf("Enter the index of insertation ");
    scanf("%d",&index);

    for(i=4;i>=index;i--)
    {
        a[i+1]=a[i];

    }

    for (i=0;i<=5;i++)
        printf("%d",a[i]);

    
}