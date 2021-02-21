//Write a program to determine all prime numbers within the range [a ...b]where a&bare input through keyboard.

#include <stdio.h>
int main ()
{
    int rstar,rend,flag_var, i, j;  //declaring the variables
    printf("Enter the range in integer numbers: "); //taking the inputs of range from teh user
    scanf("%d%d",&rstar,&rend);
    printf("Prime numbers within %d and %d are \n",rstar,rend); //printing the outputs
    for ( i=rstar+1 ; i<rend ; ++i) //creating a loop where the starting value will increase by 1
    {
        flag_var=0;
        for(j=2; j<=i/2; ++j) 
        {
            if(i%j==0) 
            {
                flag_var=1;
                break;
            }
        }
        if (flag_var==0)
                printf("%d\n",i);
    }
   return 0 ;
}