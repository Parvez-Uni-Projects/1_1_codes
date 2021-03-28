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
    int b[size];
    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&b[i]);
    int c[size];
    for(i=0;i<size;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    for(i=0;i<size;i++)
        printf("%d\t",a[i]);
    for(i=0;i<size;i++)
        printf("%d\t",b[i]);
    return 0;
}