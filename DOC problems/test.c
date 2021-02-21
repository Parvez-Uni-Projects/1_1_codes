#include<stdio.h>

/*
int main()
{
    int num1,num2,num3,num4,num5,total;
    printf("Input five numbers ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    if (num1>num2 && num2>num3 && num3>num4 && num4>num5)
    {
        total=(num1+num2+num3+num4) ;
        printf("print the sum %d",total);
        
    }
    else
    {
        printf("sorry kiddo go ahead");
    } 
    
}

*/
int MaxSubsequenceSum(int A[])
{
    int sum = 0, maxSum = 0;

    for (int j = 0; j < A.Length; j++)
    {
        sum = sum + A[j];

        if (sum > maxSum)
            maxSum = sum ;
        else if (sum < 0)
            sum = 0;
    }
    return maxSum;
}