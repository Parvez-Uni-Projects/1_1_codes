//Write a program to find out the maximum, minimum of an array of numbers.

#include <stdio.h>
int main ()
{
    int array[100],i,max,min,size; //decalring the variables 

    printf("Enter the length of the array "); //taking the user inputs  as the length of the array 
    scanf("%d",&size);

    printf("Enter the elements of the array "); //taking the user input in array
    for (i=0;i<size;i++)
        scanf("%d",&array[i]);
    
    max=array[0]; //setting the o index value as the current min and max
    min=array[0];

    for (i=1;i<size;i++)
        {
            if(array[i]>max) //if a value is greater then the value of 0 index then that will be the max value
                max=array[i];
            if(array[i]<min) //if a value is lesser then the value of 0 index then that will be the min value
                min=array[i];
        }
    printf("%d is the minimum element\n",min); //printing the min and max value
    printf("%d is the maximum element",max);
    
}