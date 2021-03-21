#include<stdio.h>
int main()
{
   int w,w1,w2;
    printf("Enter Weight of the parts of the Watermelon\n");
    scanf("%d%d",&w1,&w2);

    w=w1+w2;

       if(w%2==0 && w!=2)
         {
            if(w1%2==0 && w2%2==0)
              {
                  printf("Yes");
              }
              else
              {
                  printf("no");
              }
         }
         else
            {
                printf("No");
            }

   return 0;

}
