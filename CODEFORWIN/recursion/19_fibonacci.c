/*3. Write a function to obtain the first 25 numbers of a Fibonacci  sequence. In a Fibonacci sequence the sum of two successive terms 
given  the third term. Following are the 
first few terms of the Fibonacci sequence:  1 1 2 3 5 8 13 21 34 55.  */

#include<stdio.h>
int isFibo(int);

int main()
{
    int i,n; //here n =25 as we are told to print the first 25 fibonacci number
         //printf("Enter the range : ");
        //scanf("%d",&n);
        printf("Enter the valu of n ");
        scanf("%d",&n);
         printf("%d\t",isFibo(n)); //printing the specific fibonacci 
   /* for(i=1;i<=n;i++) // creating the loop for printing all the values every iteration will increase the value of i by 1
    {
       printf("%d\t",isFibo(i)); //printing the fibonacci numbers
    }
*/
     //printing the fibonacci numbers
    return 0;
}

int isFibo(int n) //creating a recursive function which will give us the fibonacci numbers
{
    if(n==1 || n==0) //the stop condition
        return n;
    else
        return (isFibo(n-1)+isFibo(n-2)); 
}