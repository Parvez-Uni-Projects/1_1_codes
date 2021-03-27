//Write a program to find out the maximum, minimum of an array of numbers.

#include <stdio.h>
int main ()
{
    int array[100],i,max,min,size;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    printf("Enter the elements of the array ");
    for (i=0;i<size;i++)
        scanf("%d",&array[i]);
    
    max=array[0];
    min=array[0];

    for (i=1;i<size;i++)
        {
            if(array[i]>max)
                max=array[i];
            if(array[i]<min)
                min=array[i];
        }
    printf("%d is the minimum element\n",min);
    printf("%d is the maximum element",max);
    
}