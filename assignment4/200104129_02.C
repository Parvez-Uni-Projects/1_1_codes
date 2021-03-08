//2. A prime integer is entered through the keyboard. Write a function to obtain  the prime factors of this number. For example, prime factors of 24 are 2, 2,  2 and 3 whereas prime factors of 35 are 5 and 7. 

#include<stdio.h>
void primeFact(int x);
int main()
{
    int num;
    printf("Enter an integer: "); //taking teh input form the user
    scanf("%d", &num);
    primeFact(num); //sending the argument to the function

    return 0;
}

void primeFact(int x) //creating a function to find out the prime factors
{
    int i;
    for(i=2;i<=x;i++) //starting the loop by 2 as it is the lowest prime number
    {
        if(x%i==0) //checking if its a a factor of the number
        {
            printf("%d\t",i); //printing the value of the factor
            x = x/i;
            i--; //if it is a factor we are decreasing the value value of the factor by one
        }
    }
}