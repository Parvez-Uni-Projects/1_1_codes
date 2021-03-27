#include <stdio.h>
int main ()
{
    int i,size,sum=0,min,max;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    min=a[0];
    max=a[0];


    for(i=0;i<size;i++)
           {
               if(max>a[i])
               {
                   max=max;
                   min=a[i];
               }   
                else
                {
                    max=a[i];
                    min=min;
                }
                    
           }
    printf("Max is %d\t Min is %d",max,min);
    return 0;
}