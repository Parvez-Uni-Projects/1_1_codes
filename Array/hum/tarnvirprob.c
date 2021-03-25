#include<stdio.h>
void main()
{
    int a[20],i,index,j,t,n=8;

    printf("Enter Array Element : ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
   // printf("Enter The Any Value for delate: ");
    //scanf("%d",&index);

    for(i=0;i<5;i++)
    {

      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              for(t=j;t<n;t++)
              {
                  a[t]=a[t+1];
              }
              j--;
              n--;
          }
      }

    }
    for(i=0;i<4;i++)
    {
        printf("%d\t", a[i]);
    }
}