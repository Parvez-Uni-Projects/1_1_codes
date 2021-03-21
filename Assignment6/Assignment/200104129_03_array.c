//Write a program to copy the elements of one array into another array.

#include<stdio.h>
int main()
{
    int input[100],output[100],i,size; //DECALRING VARIABLES

    printf("Enter the size of the array "); //TAKING THE LENGTH OF THE ARRAY 
    scanf("%d",&size);

    printf("Enter the element of the array "); //TAKING THE ELEMENTS OF THE ARRAY 
    for(i=0;i<size;i++)
        scanf("%d",&input[i]);
    
    for(i=0 ; i<size ;i++) //COPYING THE VALUE OF THE ARRAY INTO ANOTHER ARRAY 
        output[i]=input[i];

    printf("The copied elements are : "); //PRINTING THE ELEMENTS
    for(i=0;i<size;i++)
        printf("%d\t",output[i]);

}