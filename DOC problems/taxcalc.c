#include<stdio.h>
void main()
{
    float sal;
    printf("Enter the Cost sal \n");
    scanf("%f",&sal);
    if(sal>=50000)
    { 
    
       printf("The tax amount  is %f",sal*.4);
    }
    else if (sal>=30000 && sal<= 49999)
    {
       printf("The tax amount  is %f",sal*.3);
    }
    else if (sal<30000)
    {
       printf("The tax amount is %f",sal*.2);
    }  
    else
    printf("There amount is invalid");
}