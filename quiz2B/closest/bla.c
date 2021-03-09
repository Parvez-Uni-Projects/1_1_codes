#include <stdio.h>

int main()
{
    int k=1,i,a;
    while(k<4)
    {

        for(i=0; i<k; i++)
        {

            if((i+k)%4 == 1)
            {
                printf("%d",k-i);
            }
            else
            {
                printf("%d",i+k);
            }

        }
        a=i+k;
            printf("\n%d\n",a);
            k++;

    }
    return 0;
}