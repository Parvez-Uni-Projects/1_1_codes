//fibonnacci


#include<stdio.h>
int main()
{
    int i,num,term1=0,term2=1,term3; //declaring the values
    printf("Upto which term do you want to print : ");
    scanf("%d", &num); //taking the input from the user
    printf("%d\t", term1); //printing the first two values of the series as they dont go well with rest of the series
    printf("%d\t", term2);
    for(i=3; i<=num; i++) //initiating the for loop till num
    {
        term3=term1 + term2; //getting the values as the theory of fibonacci
        printf("%d\t", term3); //printing the series 
        term1=term2;//replacing the values to the variables
        term2=term3;
    }

    return 0;
}