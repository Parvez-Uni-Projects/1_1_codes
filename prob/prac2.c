#include<stdio.h>
int main()
{

    char ch,che;
    int n,i,j;

     printf("Enter till rows number: ");
     scanf("%d",&n);
    ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;)
        {   
            
            printf("%c\t",ch);
            ch+=(char)1;
            j++;
            
        }
    }
}