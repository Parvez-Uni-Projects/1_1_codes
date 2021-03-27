//Write a C program to delete an element from an array at specified position.

#include <stdio.h>
int main ()
{
    int i,size,n,index;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter position to delete ");
    scanf("%d",&index);

    for(i=index;i<size;i++)
         a[i-1]=a[i];
    size--;
    for(i=0;i<size;i++)
        printf("%d\t",a[i]);

    return 0;
}