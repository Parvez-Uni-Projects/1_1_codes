#include <stdio.h>

int main ()
{
    int i,j;
    char c;
    double sum,m[12][12],k;

    scanf("%c",&c);
    for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%lf",&k);
                m[i][j]=k;
            }
        }

    for(i = 0; i < 12; i++)
     {
        for(j = i+1 ; j <= 10-i; j++) 
        {   
            if(i!=j &&)
                sum += m[i][j];
        }
    }

    if(c == 'S') {
        printf("%.1lf\n", sum);
    } else if(c == 'M') {
        printf("%.1lf\n", sum/30);
    }

    return 0;


}