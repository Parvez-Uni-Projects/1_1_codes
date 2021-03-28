//Write a C program to count frequency of each element in an array.

#include <stdio.h>

int main()
{
    int size, i, j, count;

    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size],freq[size];

    printf("Enter elements in array: ");            /* Input elements in array */
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;            /* Initially initialize frequencies to -1 */
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])      /* If duplicate element is found */
            {
                count++;
                freq[j] = 0;         /* Make sure not to count frequency of same element again */
            }
        }

        if(freq[i] != 0)               /* If frequency of current element is not counted */
        {
            freq[i] = count;
        }
    }
    //Print frequency of each element
     
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    

    return 0;
}