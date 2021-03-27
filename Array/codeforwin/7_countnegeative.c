#include <stdio.h>
int main ()
{
    int i,size,countnegative=0;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(i=0;i<size;i++)
        {
            if(a[i]<0)
                countnegative++;
        }

    printf("%d negative numbers ",countnegative);

    return 0;
}