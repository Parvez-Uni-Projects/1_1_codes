#include <stdio.h>
int isPower(int,int);//defining the power function 
int main ()
{
    int n,i,sum=0; //declaring the variables
    scanf("%d",&n);//scanning the user input

    for(i=0;i<n;i++)
        {
            sum+= (10 * isPower(10,i))-1;

            //printf("(10 * %d) - 1 = %d \n",isPower(10,i) ,10 * isPower(10,i)-1); //checking the pattern if its okay or not 
        }

    printf("%d",sum); //final result

    return 0;
}
int isPower(int x,int y) //creating the power function also the built in function can be used
{
    int pow=1,i;
    for(i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}

