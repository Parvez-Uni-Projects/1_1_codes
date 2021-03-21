#include<stdio.h>
int exam(int);
int main()
{
    int k=1, a;
    while(k<4)
    {
        printf("\n%d\n",exam(k++));
    }
    return 0;
}

int exam(int i)
{
    int j;
    for(j=0; j<i; j++)
        {
            if((i+j) < i)
            {
                printf("%d ",i*j);
            }
            else
            {
                printf("%d ",i+j);
            }
        }
        return i+j;
}
