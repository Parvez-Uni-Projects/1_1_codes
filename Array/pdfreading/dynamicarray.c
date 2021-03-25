
#include <stdio.h>
void main() 
{
int a[6], sqr_a[6], *p, *q ; 
p = a ; 
q = sqr_a; 
for( i = 0 ; i < 5 ; i ++){ 
*p = i + 1 ; 
p ++ ; 
*q = (i + 1)*(i + 1); 
q ++ ;
} 
for( i = 0 ; i < 5 ; i ++) 
printf(“%d/t%d\n”a[i],sqr_a[i]); 
}