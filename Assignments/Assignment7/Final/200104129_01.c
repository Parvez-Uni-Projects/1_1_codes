//Write a program to delete a specific value from an array input from the user.

#include <stdio.h>
int main ()
{
    int i,size,n,index,num1;//declaring the variables 

    printf("Enter the length of the array "); //taking the size of the array 
    scanf("%d",&size); 

    int a[size];//declaring the maximum  size of the array 

    printf("Enter the element of the array "); //taking the elements of the array 
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

     printf("Enter the value to delete : ");//taking the number the user wants to delete 
        scanf("%d",&num1);
    
    for(i=0 ;i<size;i++)
        {
            if(a[i]==num1) //finding in which index the value is situated
                index=i+1; //finding that index number and increasing that by 1 for further use
        }


    for(i=index;i<size;i++) //deleting the value and left shifting the left indexes only the this n index going to n-1 th index
         a[i-1]=a[i];
        
    size--; //decreasing the size by 1 as we have deleted one value

    if(index!=0) //checking wheather the element was present in the array or not 
    {
        for (i=0;i<size;i++) //printing the new array 
        printf("%d\t",a[i]);
    }
    else //if the the array the user wanted to delete wasn't in the array then this will print
        printf("Element not found");

    return 0;
}