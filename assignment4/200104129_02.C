//2. A prime integer is entered through the keyboard. Write a function to obtain  the prime factors of this number. For example, prime factors of 24 are 2, 2,  2 and 3 whereas prime factors of 35 are 5 and 7. 

#include<stdio.h>
void prime(int x);
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    prime(num);

    return 0;
}

void prime(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d\t",i);
            x = x/i;
            i--;
        }
    }
}