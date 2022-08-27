// Write a program that takes N as and input and stores the 1st N number (starting from 1 upto N) in an arrat . Also find out the sum of the numbers in the array which are divisible by 4 but are less than 15

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of N ");
    scanf("%d", &n);

    int arr[n]; // declaring array of n length
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1; // storing the values in an array
        // printf ( " %d  ",arr[i]); // printing the values of the array
        if (arr[i] % 4 == 0 && arr[i] < 15) // implementing the given condition divisible by 4 and less than 15
            sum += arr[i];
    }

    printf("The sum is : %lld", sum); // printing the sum

    return 0;
}