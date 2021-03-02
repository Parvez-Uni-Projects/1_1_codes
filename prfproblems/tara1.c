#include<stdio.h>
int main ()
{
    int i,j,flag = 0;

    printf("Enter the last value")


    for(j=2; j<=100; j++)
    {
        flag = 0;
        for(i=2; i<j;i++ )

        {
            if(j%i == 0)
            {
                flag =1;
                break;
            }
        }

   if(flag==1)
  {
      printf("%d: is Prime Number\n", j );
  }
   else
    {
      printf("%d: is not Prime Number\n", j);
    }

    return 0;

    }