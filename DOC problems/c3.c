#include<stdio.h>
void main()
{
    int cost,sell;
    printf("Enter the Cost price & selling price \n");
    scanf("%d%d",&cost,&sell);
    if(sell>cost)
    { 
        printf("The seller has made a profit\n");
       printf("The profit is %d",sell-cost);
    }
    else if (sell<cost)
    {
       printf("The seller has made a loss\n");
       printf("The loss is %d",cost-sell);
    }
    else
    printf("There is neither profit nor loss");
}