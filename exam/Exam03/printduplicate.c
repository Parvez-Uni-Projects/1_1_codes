//Write a C program to print all duplicate in the array.

#include <stdio.h>
int main ()
{
    int i,j,size,count,dupli=0;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    int arr[size],freq[size];
    printf("Enter the elements of the array ");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }

    for(i=0;i<size;i++)
    {
        count=1 ;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j]) 
            {
                count++;
                freq[j]=0;
                dupli++;
            }
        }
        if(freq[i]!=0)
            freq[i]=count;
    }


    for(i=0;i<size;i++)
        {
            if(freq[i]>=2)
                printf("%d\t",arr[i]);
                
        }

    if(dupli==0)
        printf("No duplicate value ");
   
}

