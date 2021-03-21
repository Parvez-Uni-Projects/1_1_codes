#include<stdio.h>
int main()
{
  int year;

  printf("Enter Year: ");
  scanf("%d",&year);

  if(( year%4==0) && ( (year%400==0) || (year%100!=0) ) )
    printf("yoo %d is a leap year.",year);
  else
    printf("sorry %d is not a leap year.",year);

  return 0;
}