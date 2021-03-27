//Write a C program to insert an element in an array.

#include <stdio.h>
int main ()
{
    int i,size,n,index,temp=0;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size+1];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter position to insert ");
    scanf("%d",&index);
    printf("Enter number to insert ");
    scanf("%d",&n);
    

    for(i=size;i>index-1;i--)
         a[i]=a[i-1];
  
    a[index-1]=n;
    
    for(i=0;i<=size;i++)
        printf("%d\t",a[i]);

    return 0;
}