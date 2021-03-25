//Write a program to separate odd and even integers in separate arrays.

#include<stdio.h>
int main ()
{
    int array[20],odd[20],even[20],i,size,size2,size3,j=0,k=0;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    printf("Enter the array ");
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    for (i=0;i<size;i++)
        {
            if (array[i]%2==0)
            {   
                 even[j]=array[i];
                 j++;
                 size2=j;
            }
            else
            {   
                 odd[k]=array[i];
                 k++;
                 size3=k;
            }      
        }
    for(j=0;j<size2 ;j++)     
        printf("%d\t",even[j]);

    printf("\n");
    
    for(k=0;k<size3 ;k++)
        printf("%d\t",odd[k]);
    
    return 0;
}