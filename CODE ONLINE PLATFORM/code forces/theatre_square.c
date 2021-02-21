#include <stdio.h>

int main ()
{
    int m,n,a,arearect,areaflag,stones,stonesr,stonesn;
    printf("");
    scanf("%d%d%d",&m,&n,&a);
    arearect=m*n;
    areaflag=a*a;
    stones=arearect/areaflag;
    stonesr=arearect%areaflag;

    if (stonesr>=1 && stonesr<=areaflag )
    {
        stonesn=stones*stones;
        printf("%d",stonesn);
    }
    else{
        printf("%d",stones);
    }
}