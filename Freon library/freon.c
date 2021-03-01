#include <stdio.h>
//int bSort();                      //function using bubble sort algorithm
//int sSort();                      //function using selection sort algorithm
//int search();                  //function for seaching a specific  number in a array 
int fact(int);                  //function for finding the factorial of a number
int isNpr(int,int);          // function for finding the value of nPr 
int isNcr(int,int);             // function for finding the value of nCr 
int isPrime(int);           //function for checking if a number is prime or not
int isEven(int);          //function for checking if a number is even or not
int isOdd(int);                //function for checking if a number is odd or not
int isCapital(char);         //function for checking if a character is capital or not 
int isPower(int,int);      // function for finding the power of a number
int isPerfect(int);         //function for finding the perfect number
int isArmstrong(int);       //function for finding the armstrong number
int isStrong(int);          //function for finding the strong number
int main ()
{
    int num1,num2,num3;
    char ch;

    printf("Enter three number and a character: ");
    scanf("%d %d %d %c",&num1,&num2,&num3,&ch);

    printf("%d is the factorial of %d\n",fact(num1),num1);
    
    printf("%d^%d is %d\n",num1,num2,isPower(num1,num2));

    if(isOdd(num1))
    printf("%d is an odd number\n",num1);
    else
    printf("%d is an even number\n",num1);

    if (isEven(num2))
    printf("%d is an even number\n",num2);
    else
    printf("%d is an odd number\n",num2);

    if (isCapital(ch))
    printf("%c is capital letter\n",ch);
    else
    printf("%c is Small  letter\n",ch);

    if(isPrime(num1))
    printf("%d is a prime number \n",num1);
    else
    printf("%d is not a prime number \n",num1);

    if(isPerfect(num3))
    printf("%d is a perfect number \n",num3);
    else
    printf("%d is not a perfect number \n",num3);

    if(isArmstrong(num3))
    printf("%d is an armstrong number \n",num3);
    else
    printf("%d is not an armstrong number \n",num3);

    if(isStrong(num3))
    printf("%d is an strong number \n",num3);
    else
    printf("%d is not an strong number \n",num3);

    if (num2>num1)
    {
        printf("%dP%d is %d\n ",num2,num1,isNpr(num2,num1));
        printf("%dC%d is %d\n ",num2,num1,isNcr(num2,num1));
    }
    
    else
    {
        printf("%dP%d is %d \n ",num1,num2,isNpr(num1,num2));
        printf("%dC%d is %d \n ",num1,num2,isNcr(num1,num2));
        
    }

}
//factorial function building
int fact(int x)
{
    int fac=1,i;
    for(i=1;i<=x;i++)
        fac*=i;
    return fac;
}
//nPr function building
int isNpr(int x,int y)
{   
    int nPr;
    nPr=((fact(x))/(fact(x-y)));
    return nPr;
}
//building the ncr function
int isNcr(int x,int y)
{
    int nCr;
    nCr= isNpr(x,y)/fact(y);
    return nCr;
}
//prime function building
int isPrime(int x)
{
    int i=2,isPrime=1;

    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1 && x > 1)
       return 1;
    else
        return 0;
}
//even function building
int isEven(int x)
{
    if(x%2==0)
    return 1;
    else
    return 0;
}
//odd function building
int isOdd(int x)
{
    if(x%2!=0)
    return 1;
    else
    return 0;
}
// finding out the capital function
int isCapital(char ch)
{
    if((int)ch>=65 && (int)ch<=90)
        return 1;
    else if ((int)ch>=97 && (int)ch<=122)
        return 0;
}
//power function building
int isPower(int x,int y)
{
    int pow=1,i;
    for(i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}
//perfect number function building 
int isPerfect(int x)

{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    if(sum==x)
        return 1;
    else
        return 0;   
}
//armstrong number function building
int isArmstrong (int x)
{
    int i=0,digit,sum=0,input;
    input=x;
    for(;x>0;)
    {
        i++;
        digit=x%10;
        x/=10;
    }
    x=input;
    for(;x>0;)
    {
        digit=x%10;
        x/=10;
        sum= sum + isPower(digit,i);
    }
    if(input==sum)
    return 1;
    else
    return 0;
}
//strong number function building 
int isStrong(int x)
{
    int temp2,i=0,digit,sum=0,input; 
    input=x;
    for(;x>0;)
    {
        digit=x%10;
        x/=10;
        sum= sum + fact(digit);
    }
    if (sum==input)
    return 1;
    else 
    return 0;
}