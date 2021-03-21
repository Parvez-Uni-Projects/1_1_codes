#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark ");
    scanf("%d",&mark);


    if(mark>=80 && mark<=100)
    { 
       printf("The grade is A+");
    } 
    else if (mark>=75)
    {
       printf("The grade is A");
    }
    else if (mark>=70)
    {
       printf("The grade is A-");
    }
    else if (mark>=65)
    {
       printf("The grade is B+");
    }
    else if (mark>=60)
    {
       printf("The grade is B");
    }
    else if (mark>=55)
    {
       printf("The grade is B-");

    }
    else if (mark>=50)
    {
       printf("The grade is C+");
       
    }
     else if (mark>=45)
    {
       printf("The grade is C");
       
    }
    else if (mark>=40)
    {
       printf("The grade is D");
       
    }
    else if (mark<40 && mark>=0)
    {
       printf("The grade is F");
       
    }
    else
    printf("The number is invalid");
}