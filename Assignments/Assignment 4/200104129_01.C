//1. Write two different functions to calculate the GCD and LCM of three numbers. Call   these functions from main() and print the results in main(). 

#include<stdio.h>
int isgcd(int ,int,int);
int islcm(int,int,int);

int main ()
{
    int num1 ,num2,num3;

    printf("Enter three values: "); //taking the input from the user
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("GCD of %d %d %d  is %d\n",num1,num2,num3,isgcd(num1,num2,num3)); //printing the gcd of three numbers
    printf("LCM of %d %d %d  is %d\n",num1,num2,num3,islcm(num1,num2,num3)); //printing the gcd of three numbers
}

int isgcd(int x,int y ,int z) //creating a function for finding the gcd
{
    int gcd,i,min;

    min=(x<y && x<z) ? x : (y<z) ? y :z ;

    for(i=min; i >= 1; --i) //gcd cant be bigger than the minimum number so we are initiating the loop from the minimum number
    // logic 02 = for(i=1; i <= x && i <= y && i <= z; ++i) //finding out the gcd 
    {
        if(x%i==0 && y%i==0 && z%i==0) //checking for gcd
            {
                gcd=i;
                break ;  //once we find the gcd we are to stop the loop 
            }  
    
    }
     return gcd;

}

int islcm(int x,int y ,int z)//creating a function for finding the lcm
{   
    int max,min,lcm;

    max=(x>y && x>z) ? x : (y>z) ? y :z ; //finding the maximum number


    for(int i =max; ; i++) //lcm cant be smaller than the maximum number so we are initiating the loop from the maximum  number 
    {
        if (i%x==0 && i%y==0 && i%z==0 ) //checking for lcm 
        {
            lcm=i;
            break;//once we find the lcm we are to stop the loop 
        }  
    }
    return lcm;
}

