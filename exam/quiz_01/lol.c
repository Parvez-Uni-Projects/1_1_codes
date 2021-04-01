#include <stdio.h>
void main()
{
   int a=6 ,b=8,c=15,choice;
   choice=(a>b||a>c)? a:(b<c?b:c);
   printf("%d",choice);


   /*int a=6 , b=8 ,c=15 , choice;
   if (a>b||a>c)
   printf("Choice%d",a);

   else
   {
       if ((b<c))
       {
           printf("choice=%d",b);

       }
       else
       {
           printf("choice=%d",c);
       }
       
   }*/
   

}