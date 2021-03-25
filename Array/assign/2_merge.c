#include<stdio.h>
int main ()
{
    int arr1[20],arr2[20],arr3[20],size1,size2,i;

    printf("Enter the length of the array "); 
    scanf("%d",&size1);

    printf("Enter the elements of the array "); 
    for (i=0;i<size1;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the length of the array "); 
    scanf("%d",&size2);
    printf("Enter the elements of the array "); 
    for (i=0;i<size2;i++)
        scanf("%d",&arr2[i]);

/*
    for(i=0;i<size2;i++)
        arr1[size1+i]=arr2[i];
    for (i=0;i<(size1+size2);i++) 
        printf("%d\t",arr1[i]);
        */

    for(i=0;i<size1;i++)
        arr3[i]=arr1[i];
    for(i=size1;i<size1+size2;i++)
        arr3[i]=arr2[i-size1];

  
    for (i=0;i<(size1+size2);i++) 
        printf("%d\t",arr3[i]);

}