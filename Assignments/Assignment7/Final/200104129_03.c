//Write a program to separate odd and even integers in separate arrays.

#include<stdio.h>
int main ()
{
    int size,i,j=0,k=0; //declaring the variables

    printf("Enter the size of the array "); //taking the size of the array 
    scanf("%d",&size);

    int array[size],odd[size],even[size];//defining the max value by size to decrease the memory loss

    printf("Enter the array ");//taking the elements of the array from the user
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    for (i=0;i<size;i++) //initiating the for loop for finding the even and odd
        {
            if (array[i]%2==0)  //checking wheather the is number is even or odd
            {   
                 even[j]=array[i];
                 j++;  //increasing the value by 1 in per iteration thus allocating them in a index number
            }
            else
            {   
                 odd[k]=array[i];
                 k++;
            }      
        }


    for(i=0;i<j ;i++)   //printing the even numbers array   
        printf("%d\t",even[i]);

    printf("\n");
    
    for(i=0;i<k ;i++)   //printing the odd numbers array
        printf("%d\t",odd[i]);
    return 0;
}