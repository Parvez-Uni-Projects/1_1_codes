/* C Program to find Perfect Number using For Loop */

#include<stdio.h>
int main()
{
    int i,num, sum =0;  //declaring the variables

    printf("Enter the value of n: ");
    scanf("%d", &num);  //taking the user input 

    for(i=1; i<num; i++) //initiating the for loop
     {
       if(num % i == 0)  //finding the divisiors 

           sum = sum + i; //finding the sum of the divisors 
     }
       if(num == sum)  //giving the conditions
        printf("%d is a strong number", num);
       else
        printf("%d is not a Perfect number",num);
    
    return 0;

}