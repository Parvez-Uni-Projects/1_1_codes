//Write a program to find out the sum of the numbers in a list of array.

#include <stdio.h>
int main()
{
    int array[100],i,size,sum=0; //declaring teh variables and the array maximum length

    printf("Enter the length of the array "); //taking the input from the user
    scanf("%d",&size);

    printf("Enter the elements of the array "); //taking the array and storing those into arrays 
    for (i=0;i<size;i++)
        scanf("%d",&array[i]);
    for (i=0;i<size;i++) //adding the elements of array and keeping them in in a variable
        sum+=array[i];
    printf("%d is the sum of the elements",sum); //printing the values
}