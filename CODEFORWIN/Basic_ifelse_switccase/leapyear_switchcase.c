#include<stdio.h>
int main()
{
   int year, ly;

   printf("Enter Year: ");
   scanf("%d",&year);

   ly=((year%4==0)&&((year%400==0)||(year%100!=0)));

   switch(ly)
   {
    //the ly statement is true so the value is 1
   case 1:
     printf("Yoo its Leap Year.");
     break;
    //the ly statemnt is false so teh value is 0
   case 0:
     printf("sorry Not Leap Year.");
     break;
    //the value inputted is not valid and doesn't go with the ly statement
   default:
     printf("hey its invalid.");
     break;
   }
   return 0;
}