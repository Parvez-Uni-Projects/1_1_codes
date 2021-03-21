//WAP to input a number and print its reverse number. Also check that the number is palindrome or not. [if the original number and reverse number is equal then it is palindrome]
#include<stdio.h>
int main()
{
    int i,rev=0,digit,num;

    printf("Enter a positive value ");
    scanf("%d",&num);
    i=num;
    for(;num!=0;)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num/=10;
    }

    printf("The reverse number is %d \n",rev);

    if (rev==i)
    {
        printf("%d is a pallindrome number \n",i);
        
    }
    else
    {
        printf("%d is not a pallindrome number \n",i);
    }
    

}