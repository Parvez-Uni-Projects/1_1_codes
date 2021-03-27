//Write  a  program  to  determine  the GCD(greatest  common  divisor)  and LCM(leastcommon multiple) of 3 numbers

#include <stdio.h>
int main()
{
    int x, y,z,j, i,gcd,lcm,mul,max,min;
    printf("Enter three numbers: "); //taking input from the user
    scanf("%d %d %d", &x, &y,&z);

    for(i=1; i <= x && i <= y && i <= z; ++i) //finding out the gcd 
    {
        if(x%i==0 && y%i==0 && z%i==0)
            gcd = i;
    }
    max=(x>y && x>z) ? x : (y>z) ? y :z ;

    min=(x<y && x<z) ? x : (y<z) ? y :z ;

    for(int i =max; ; i++)
    {
        if (i%x==0 && i%y==0 && i%z==0 )
        {
            lcm=i;
            break;
        }    
    }

    printf("G.C.D of %d ,%d and %d is %d  \nL.C.M of %d ,%d and %d is %d ", x, y,z, gcd,x,y,z);//printing out the values of gcd lcm

    return 0;
}