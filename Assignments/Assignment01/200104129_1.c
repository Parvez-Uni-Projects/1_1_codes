/*AUST grading policy is :(i)80 % marks or above is A+(ii)75% to 79% marks is A(iii)70% to 74% marks
 is A-(iv)65% to 69% marks is B+(v)60% to 64% marks is B(vi)55% to 59% marks is B-(vii)50% to 54% marks is
  C+(viii)45% to 49% marks is C(ix)40% to 44% marks is D(x)Below 40% is FWrite a program  which will take an input from user 
 and calculate the grade of  a student according to AUST grading policy based on that input */

#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark ");   //taking input of the mark
    scanf("%d",&mark);


    if(mark>=80 && mark<=100)   // checking the grades of the mark
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
    else if (mark<40 && mark>=0)    //if the mark is greater than 0 and less then the grade is F
    {
       printf("The grade is F");
       
    }
    else
    printf("The number is invalid"); //if the mark is out of range then this will execute
}