#include<stdio.h>
int primefactor_rec(int n, int i);
int main()
{
 int num;
 printf("Enter a Positive Number: ");
 scanf("%d",&num);
 printf("%d are the prime factors of the user entered number",primefactor_rec(num,2));
   return 0;
}
int primefactor_rec(int n,int i)
{
    if(n>1 && (n%i==0))
    {
        printf("%d\t",i);
        primefactor_rec(n/i,i); //here we are not returning any value but it was supposed to return a value ? the why isn't it creating prob 
    }
    else
        primefactor_rec(n,i+1);
}

// there are two codes below  

// ********* code using void return type ********//
/*
#include <stdio.h>
void primefac(int,int);
int main ()
{
    int num1;

    printf("Enter a number : ");
    scanf("%d",&num1);


    primefac(num1,2);
}
void primefac(int num1,int num2)
{
    
    if (num1%num2==0)
    {
        printf("%d",num2);
        primefac(num1/num2,num2);
    }
    else
        primefac(num1,num2+1);
}
*/

/*#include<stdio.h>
int natural(int,int);
int main()
{
    int ll,ul;

    printf("Enter the upper limit and lower limit ");
    scanf("%d%d",&ll,&ul);
    
    natural(ll,ul);
}
int natural(int ll,int ul)
{   
    int i;
    if(ll>ul)
        return 0;
    printf("%d\t he\t",ll);
    natural(ll+1,ul);
} */
