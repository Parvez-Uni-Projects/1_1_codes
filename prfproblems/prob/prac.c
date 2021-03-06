#include<stdio.h>
int main()
{

    char ch,che;
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(ch='A';ch<='D';ch++)
    {
        for(che='A';che<='A';che++)
        {
            printf("%c", che);
        }
        printf("\n");
        printf("%c",ch);
    }
}