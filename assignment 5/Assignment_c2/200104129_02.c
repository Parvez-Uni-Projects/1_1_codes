//Write a recursive function that can reverse a number given as input. 

#include <stdio.h>
int reverse(int);  //DEFINING THE FUNCTIONS
int power(int,int);
int count(int);
int main()
{
    int num;
    printf("Enter the number "); //taking the inputs from teh users
    scanf("%d",&num);

    printf("The reverse number is %d",reverse(num)); //getting the reverse value from the reverse function 

}

int reverse(int num) //creating the reverse function
{
    if (num==0)
        return 0;  //the stop case ,this will return 0 when the function stops
    else 
        return ((num%10)*(power(10,(count(num))-1)) + reverse(num/10));  //algorihtm for getting the reverse function divided into 2 parts
}
int power(int num, int num1) //creating the power function for supporting our reverse function
{   if (num1==0)
        return 1;
    else
        return num*power(num,num1-1);
}
int count(int num)  //creating the count function for suporting our reverse function
{
    if (num==0)
        return 0; //stop condition
    else
        return 1+ count(num/10);  //base condition
}

