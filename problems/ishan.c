#include<stdio.h>
int main ()
{
    int n,i,seat=100,total=0;
    printf("No of bogies: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        total+=seat;
        seat+=20;
    }
    printf("Total seats: %d",total);
}