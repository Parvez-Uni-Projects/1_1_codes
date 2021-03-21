//WPA to input a number and count its even and odd digits and find out their sum separately
#include<stdio.h> 

int main(){

               int num,rem,odd=0,even=0,digit,input;

               printf("  Enter an integer number: ");
               scanf("%d",&num);
               input = num;
               for(;num>0;)
               {

               digit = num % 10;

               num = num / 10;

               rem = digit % 2;

               if(rem != 0)
               {
                odd=odd+digit;
                printf("%d is an odd number\t",digit);
               }                
               else
               {
                even=even+digit;
                printf("%d is an even number\t",digit);

               }
                

               }

    printf("\n  The sum of Odd digits present in %d is %d.",input,odd); 
    printf("\n  The sum of even digits present in %d is %d.",input,even); 
    return 0; 

    }