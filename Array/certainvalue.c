#include <Stdio.h>
int main ()
{
    int i,index=0,a[10]={1,2,3,4,5},num1,size;

    
    printf("Enter the size of array ");
    scanf("%d",&size);

    printf("Enter the elements of the array ");
    for (i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter the value : ");
    scanf("%d",&num1);

    for(i=0 ;i<size;i++)
        {
            if(a[i]==num1)
                index=i;
        }
    for(i=index;i<4;i++)
    {
        a[i]=a[i+1];
        //a[i-1]=a[i];
    }

    if(index!=0)
    {
        for (i=0;i<size-1;i++)
        printf("%d",a[i]);
    }
    else
    {
        for (i=0;i<size;i++)
        printf("%d",a[i]);
    }

    
}




