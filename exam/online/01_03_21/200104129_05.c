#include <stdio.h>
#include <math.h>
int reverse();
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

   // printf("The reverse number is %d",reverse(num));
   printf("The the number of digit is %d",reverse(num));

}

int reverse(int x)
{
    int temp,i=0,digit,sum=1,input; 
    input=x;

    for(;x>0;)
    {
        i++;
        digit=x%10;
        x/=10;
    }
    /*for(;input>0;)
    {
        digit=input%10;
        input/=10;

        i--;
        temp=digit*pow(10,i);
        
        sum+=temp;
    }*/
    return i;
}