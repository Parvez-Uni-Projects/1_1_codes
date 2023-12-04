// Write a program to print the following series upto n terms using loop . You must take N as User input

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of N ");
    scanf("%d", &n);
    long long sum = 0;
    int first_number = 3; // initializing the first number
    for (int i = 0; i < n; i++)
    {
        sum += (first_number * first_number); // adding the numbers square and storing it in sum 
        first_number += 8; // incrementing the value to find the next number of the series 
    }

    printf("The sum is : %lld", sum); // printing the sum

    return 0;
}