//1. Write two different functions to calculate the GCD and LCM of three numbers. Call   these functions from main() and print the results in main(). 

#include<stdio.h>
int isgcd(int ,int,int);
int islcm(int,int,int);

int main ()
{
    int num1 ,num2,num3;

    printf("Enter three values: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("GCD of %d %d %d  is %d\n",num1,num2,num3,isgcd(num1,num2,num3));
    printf("LCM of %d %d %d  is %d\n",num1,num2,num3,islcm(num1,num2,num3));
}

int isgcd(int x,int y ,int z)
{
    int gcd,i,min;

    min=(x<y && x<z) ? x : (y<z) ? y :z ;

    for(i=min; i >= 1; --i)
    // logic 02 = for(i=1; i <= x && i <= y && i <= z; ++i) //finding out the gcd 
    {
        if(x%i==0 && y%i==0 && z%i==0)
            {
                gcd = i;
                break ;
            }
    }
     return gcd;

}

int islcm(int x,int y ,int z)
{   
    int max,min,lcm;

    max=(x>y && x>z) ? x : (y>z) ? y :z ;


    for(int i =max; ; i++)
    {
        if (i%x==0 && i%y==0 && i%z==0 )
        {
            lcm=i;
            break;
        }  
    }
    return lcm;
}

