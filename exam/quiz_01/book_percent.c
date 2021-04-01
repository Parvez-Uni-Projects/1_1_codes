#include<stdio.h>
void main()
{
    float book;
    printf("Enter the book price \n");
    scanf("%f",&book);
    if(book>=1500)
    { 
    
       printf("The price is  is %f",(book-(book*.2)));
    }
    else if (book>=1000 && book<= 1499)
    {
       printf("The  price is %f",(book-(book*.15)));
    }
    else if (book>=500 && book<= 999)
    {
       printf("The price is %f",(book-(book*.1)));
    } 
     else if (book<=499 )
    {
       printf("The book value is %f",book);
    } 
    else
    printf("There amount is invalid");
}