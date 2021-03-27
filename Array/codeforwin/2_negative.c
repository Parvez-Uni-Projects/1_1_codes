#include <stdio.h>
int main ()
{
    int i,size;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(i=0;i<size;i++)
        {
            if(a[i]<0)
                printf("%d\t",a[i]);
        }
        

    return 0;
}