 //1-2+3-4+...+n
#include<stdio.h>
int main()
{                              
    int i,odds=0,evens=0,n; //delcaring the variables

    printf("Enter the value of n: "); 
    scanf("%d",&n); //taking the input form the user


    for(i=1;i<=n;i++) //initiating the for loop

    {
       if(i%2==0) //finding if the value is even number
        {
            evens+=i; //adding if the value is even number

        }
        else //checking if the value is odd number
        {
            odds+=i;    //adding if the value is odd number   
        }

        
    }

    printf("The sum is %d",odds-evens);//printing the sum of the series



    return 0;
}