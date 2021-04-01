//Write a program to separate odd and even integers in separate arrays.

#include<stdio.h>
int main ()
{
    int i,size,j=0,k=0;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    int array[size],odd[size],even[size];

    printf("Enter the array ");
    for(i=0;i<size;i++)
        {
            scanf("%d",&array[i]);
            even[i] = -1;
            odd[i]  = -1;
        }
        

    for (i=0;i<size;i++)
        {
            if (array[i]%2==0)
            {   
                 even[j]=array[i];
                 j++;
            }
            else if(array[i]%2==1)
            {   
                 odd[k]=array[i];
                 k++;
            }      
        }

    printf("Even elements are ");
    for(i=0;i<j ;i++) 
    {
        if(even[i]!=-1)
            printf("%d\t",even[i]);
    }    

    printf("\n");  
    printf("Odd elements are ");  
    for(i=0;i<k ;i++)
    {
        if(odd[i]!=-1)
            printf("%d\t",odd[i]);
    }
        
    
    return 0;
}