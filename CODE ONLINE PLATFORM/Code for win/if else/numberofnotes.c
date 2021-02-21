/*Write a C program to input amount from user and print minimum number of notes 
(Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount. How to the minimum number of notes required 
for the given amount in C programming. Program to find minimum number of notes required for the given denomination. 
Logic to find minimum number of denomination for a given amount in C program. */

#include <stdio.h>

int main ()
{
    int amt,n500,n100,n50,n20,n10,n5,n2,n1;
    
    printf("Enter the amount please sir ");
    scanf("%d",&amt);
    if (amt>0)
    {
        n500=amt/500;
        n100=(amt-(500*n500))/100 ;
        n50=(amt-((500*n500)+(100*n100)))/50;
        n20=(amt-((500*n500)+(100*n100)+(50*n50)))/20;
        n10=(amt-((500*n500)+(100*n100)+(50*n50)+(20*n20)))/10;
        n5=(amt-((500*n500)+(100*n100)+(50*n50)+(20*n20)+(10*n10)))/5;
        n2=(amt-((500*n500)+(100*n100)+(50*n50)+(20*n20)+(10*n10)+(5*n5)))/2;
        n1=(amt-((500*n500)+(100*n100)+(50*n50)+(20*n20)+(10*n10)+(5*n5)+(2*n2)));
        printf("Total number of notes: \n500:%d\n100:%d\n50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d",n500,n100,n50,n20,n10,n5,n2,n1);   
    }

    else
    {
        printf("The amount is invalid");
    }
    
    
}