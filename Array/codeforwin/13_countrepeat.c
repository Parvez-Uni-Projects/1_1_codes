//Write a C program to count total number of duplicate elements in an array.

#include <stdio.h>
int main ()
{
    int i,j,size,repeat=0;

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
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j] && freq[j]!=0)
            {
                 repeat++;
                 freq[j]=0;
            }
        }
    }
    printf("Total number of duplicate elements is %d",repeat);
}




