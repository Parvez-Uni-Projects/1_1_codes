//Write a program to find out the sum of the numbers in a list of array.

#include <stdio.h>
int main()
{
    int array[100],i,size,sum=0;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    printf("Enter the elements of the array ");
    for (i=0;i<size;i++)
        scanf("%d",&array[i]);
    for (i=0;i<size;i++)
        sum+=array[i];
    
    printf("%d is the sum of the elements",sum);

    
}