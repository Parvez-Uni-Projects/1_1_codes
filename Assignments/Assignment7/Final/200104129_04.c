//Write a program to count the frequency of each element of an array.

#include <stdio.h>

int main ()
{
    int i,j,n,size,count; //declaring the variables 

    printf("Enter the size of of the array "); //taking the size of the array as user input
    scanf("%d",&size);
    int arr[size];
    int repeat[size];//declaring the arrays maximum length

    printf("Enter the elements ");
    for (i=0;i<size;i++)
        scanf("%d",&arr[i]); //scanning the arrays 
    
    for (i=0;i<size;i++)
        {
            count=0;
            for(j=0;j<size;j++)
                {
                    if(arr[i]==arr[j])
                        {
                            count++;   //finding the count value for i position
                            repeat[i]=count; //storing the count value in an array 
                        }
                }
        }
    for (i=0;i<size;i++) //printing the frequencies 
        printf("Frequency of %d is %d \n",arr[i],repeat[i]); 
}