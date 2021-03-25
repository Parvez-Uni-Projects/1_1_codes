#include <stdio.h>
int main ()
{
    int i,array[100],size,del;

    printf("Enter the size of the array ");
    scanf("%d",&size);
    
    printf("Enter the value you want to delete ");
    scanf("%d",&del);

    printf("Enter the array ");
    
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    for (i=0;i<size;i++)
        {
            if (array[i]==del)
                             ;
            else
                printf("%d\t",array[i]);
        }
}