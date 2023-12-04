// Write a program to take three input from the user . These three inputs represent the acquired number of a ce student in three subject , Accounting , Engineering Materials , Numerical Method . Thes three numbers should be stored in an array . Now write a function which takes a array as parameter and return the highest number of the student

#include <stdio.h>

int find_maximum(int arr[], int n)
{
    int max_value = arr[0]; // assuming the first value is maximum
    for (int i = 0; i < n; i++)
    {
        if (max_value < arr[i]) // if any value is greater than the current maximum then replacing that value with the current max
            max_value = arr[i];
    }

    return max_value;
}
int main()
{
    int n = 3; // As we are told to find the max of three numbers

    int arr[n]; // initializing the array

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("Enter the marks of Accounting "); // taking the first number input
            scanf("%d", &arr[i]);
        }
        else if (i == 1)
        {
            printf("Enter the marks of Engineering Materials "); // taking the second number input
            scanf("%d", &arr[i]);
        }
        else
        {
            printf("Enter the marks of Numerical Method "); // taking the third number input
            scanf("%d", &arr[i]);
        }
    }

    int max_value = find_maximum(arr, n); // passing the array as function arguments

    printf("The highest mark is  %d", max_value);

    return 0;
}