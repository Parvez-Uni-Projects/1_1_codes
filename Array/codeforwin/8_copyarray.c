//Write a C program to copy all elements from an array to another array.

#include <stdio.h>
int main ()
{
    int i,size,countnegative=0;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size],b[size];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(i=0;i<size;i++)
        {
            b[i]=a[i];    
        }

        for(i=0;i<size;i++)
            printf("%d\t",b[i]);

    return 0;
}