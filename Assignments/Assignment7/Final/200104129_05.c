//Write a program to print all unique elements in an array.

#include <stdio.h>
int main ()
{
    int i,j,n,size,count; //declaring the variables

    printf("Enter the size of of the array "); //taking the size of the array 
    scanf("%d",&size);
    int arr[size];
    int repeat[size]; //defining the maximum size of the 

    printf("Enter the elements "); //scanning the elements of the array 
    for (i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    for (i=0;i<size;i++)
        {
            count=0; //
            for(j=0;j<size;j++)
                {
                    if(arr[i]==arr[j])
                        {
                            count+=1; //if a element is maching with another then then we are increasing the value of count by 1
                            repeat[i]=count; //keeping the value of count in this array 
                        }
                }
        }
    for (i=0;i<size;i++)
        {
            if(repeat[i]==1) //if the value is 1 that means it is an unique element so it will be printed
            printf("%d \t",arr[i]); //pinting the arrays
        }       
}
