#include <stdio.h>
int main()
{
    int x,y,z,i,lcd,max,min;

    printf("Enter three numbers: "); //taking input from the user
    scanf("%d %d %d",&x,&y,&z);


    max=(x>y && x>z) ? x : (y>z) ? y :z ;
    min=(x<y && x<z) ? x : (y<z) ? y :z ;

    for(int i =min; ; i++)
    {
        if (x%i==0 && y%i==0 && z%i==0 )
        {
            lcd=i;
            break;
        }
        
    }

    printf("L.C.D of %d ,%d and %d is %d \n max num is %d   \n min num is %d", x, y,z,lcd,max,min);//printing out the values of gcd lcm

    return 0;
}