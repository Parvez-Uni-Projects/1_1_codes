#include <stdio.h>
int primefactor_rec(int n);
int main()
{
 int num;
 printf("Enter a Positive Number: ");
 scanf("%d",&num);

 printf("%d are the prime factors of the user entered number",primefactor_rec(num));

   return 0;

}
int primefactor_rec(int n)
{
 if(n==1)
    return n;
for (int i=2;n%i==0;i++)
   {
       printf("%d\t",i);
       primefactor_rec(n/i);
   }
 }