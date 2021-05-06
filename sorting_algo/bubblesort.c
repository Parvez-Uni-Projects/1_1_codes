#include<stdio.h>
int main()
{
    int i,size,j,temp;
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
          if(a[i]>a[j] && a[j<0])
           {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
       }

    }
    printf("After Sorting the elements\n");
    for(i=0;i<size;i++)
    {
        printf("%d:%d\n",i,a[i]);
    }
 return 0;
}