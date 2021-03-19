//Write a program to copy the elements of one array into another array.

#include<stdio.h>
int main()
{
    int input[100],output[100],i,size;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&input[i]);
    
    for(i=0 ; i<size ;i++)
        output[i]=input[i];

    printf("The copied elements are : ");
    for(i=0;i<size;i++)
        printf("%d\t",output[i]);

}