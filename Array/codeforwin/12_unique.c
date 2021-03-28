//Write a C program to print all unique elements in the array.

#include <stdio.h>
int main ()
{
    int i,j,size,count;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    int arr[size],freq[size];
    printf("Enter the elements of the array ");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        freq[0]=-1;
    }

    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }

        if(freq[i]!=0)
            freq[i]=count;
    }

    for(i=0;i<size;i++)
        {
            if(freq[i]==1)
                printf("%d\t",arr[i]);
        }

}

