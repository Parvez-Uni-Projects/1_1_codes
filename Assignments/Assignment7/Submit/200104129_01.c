//Write a program to delete a specific value from an array input from the user.
#include <Stdio.h>
int main ()
{
    int i,index=0,a[10],num1,size;

    
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
    for(i=index;i<size;i++)
    {
        a[i]=a[i+1];
        //a[i-1]=a[i];
    }

    if(index!=0)
    {
        for (i=0;i<size-1;i++)
        printf("%d\t",a[i]);
    }
    else
        printf("Element not found");
}