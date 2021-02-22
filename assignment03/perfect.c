/* C Program to find Perfect Number using For Loop */

# include <stdio.h>   

int main()   
{   
 int i, num, sum = 0 ;   
  
 printf("\n Please Enter any number \n") ;   
 scanf("%d", &num) ;   
 int input=num;
 for(i = 1 ; sum < num ; i++)   
  {   
   if(num % i == 0)   
     sum = sum + i ;   
      
      if (sum == num)   
      printf("\n %d", num) ;  
  }    
return 0 ;   
}