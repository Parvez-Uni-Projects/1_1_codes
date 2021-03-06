/*3. Write a function to obtain the first 25 numbers of a Fibonacci  sequence. In a Fibonacci sequence the sum of two successive terms 
given  the third term. Following are the 
first few terms of the Fibonacci sequence:  1 1 2 3 5 8 13 21 34 55.  */

#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==0)
        return n;
    else
        return (fibo(n-1)+fibo(n-2));     n=3 fibo(2)
}
int main()
{
    int i,result,n;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       result=fibo(i);
       printf("%d\t",result);
    }
    return 0;
}
