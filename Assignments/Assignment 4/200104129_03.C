/*3. Write a function to obtain the first 25 numbers of a Fibonacci  sequence. In a Fibonacci sequence the sum of two successive terms 
given  the third term. Following are the 
first few terms of the Fibonacci sequence:  1 1 2 3 5 8 13 21 34 55.  */

#include<stdio.h>
int isFibo(int);

int main()
{
    int i,n=25; //here n =25 as we are told to print the first 25 fibonacci number
         //printf("Enter the range : ");
        //scanf("%d",&n);
    

        printf("The fibonacci series is \n");
        isFibo(n); //printing the fibonacci numbers
    
    return 0;
}

int isFibo(int n)
{
    int a=1,b=1,c,i=1;
    for(;i<=n;i++) //the loop will run till n
    {
        printf("%d\t", a); //printing the series
        c=a+b; 
        a=b;
        b=c;
    }
    return 0;
}
