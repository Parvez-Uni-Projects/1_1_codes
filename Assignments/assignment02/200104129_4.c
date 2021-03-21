// Find out the sum of the following series. n is the input from user for series   2 * 7 * 12 * ... * 37

#include<stdio.h>
int main()
{
    int n,res=1,i; //decaring the values
    printf("The value of n: "); //Taking input from the user
    scanf("%d", &n);
    if(n<=37)  //checking if the value given is less than 37 according to the problem
    {
        for(i=2; i<=n; i+=5) //increasing value by 5 each time
        {
            res = res*i;
        }
        printf("Result= %d",res);
    }
   else
    printf("Please input the value between 2 to 37 ");
    return 0;
}