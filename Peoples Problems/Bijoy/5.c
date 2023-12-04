// Write a program to take N even Numbers as input and find the maximum even number and the average of all inputted even numbers



#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of N ");
    scanf("%d", &n);

    int arr[n];        // declaring array of n length
    float sum = 0; // for finding the sum

    int number; // this is a temporary variable
    int max_number = 0;

    printf("Enter the Numbers ");
    for (int i = 0; i < n;)
    {
        scanf("%d", &number);
        if (number % 2 == 0) // if the user inputted number is even only then adding them to array 
        {
            arr[i] = number; // pushing the number to arry
            sum += arr[i]; // adding them with the sum variable to find the total sum
            i++; // incrementing the loop counter

            if (number > max_number) // finding the maximum value 
                max_number = number;
        }
    }
    printf("The Maximum even number is  : %d\n", max_number); // printing the maximum value 
    printf("The Average is : %.2f", sum / n);               // printing average 

    return 0;
}