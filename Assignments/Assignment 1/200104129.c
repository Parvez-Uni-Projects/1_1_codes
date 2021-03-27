#include <stdio.h>

int main ()
 {
     float unit,total,bill ;
     printf ("Enter the units used by the consumer: ") ;
     scanf ("%f",&unit);
     if (unit<=100)
        {
            total= unit *5.5 ;
        }
        else if (unit>100 && unit<=300)
        {
            total = 100*5.5 +(unit-100) * 8 ;    
        }
        else if (unit>300)
        {
            total = 100*5.5 + 200*8 + (unit-300)*12 ;      
        }
            bill = total + (total*.15) +120;
            printf ("The consumer must pay: %.2f tk",bill);
 }