//a C program to enter marks of five subjects and calculate total, average.

#include <stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,total,avar,per;//taking the variables

    printf("Enter the numbers of five subjects : ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);//scanning the variables

    total=num1+num2+num3+num4+num5 ;//applying the formula
    avar =total/5;//applying the formula
     printf("The total number is %d \n The avarage number is %d",total,avar);


}