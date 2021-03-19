#include<stdio.h>
int pfactors_rec(int num, int i);
int main()
{
    int num;

    printf("Enter a Positive number: ");
    scanf("%d", &num);

    printf("Prime Factors of %d using recursion\n",num);
    pfactors_rec(num,2);

    return 0;
}
int pfactors_rec(int num, int i)
{
    if(num<=1)
        return num;
    else if(num%i==0)
    {
        printf("%d\n",i);
        pfactors_rec(num/i,i);
    }
    else
    {
        pfactors_rec(num,i+1);
    }
}