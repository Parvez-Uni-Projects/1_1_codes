#include<stdio.h>
int main ()
{
    int array[20],odd[20],even[20],i,size;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    printf("Enter the array ");
    
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    for (i=0;i<size;i++)
        {
            if (array[i]%2==0)
            {   
                 even[i]=array[i];
                 printf("Even %d\t",even[i]);
            }
               
            else
            {
                odd[i]=array[i];
                printf("odd %d\t",odd[i]);

            }
                
        }

    

}