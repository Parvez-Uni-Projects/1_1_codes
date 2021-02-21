//x and n are input through keyboard. Write a program to compute xn, n!, nCr, nPr

#include<stdio.h>
int main()
{
    int i,res=1,nfac=1,nrfac=1,x,n,r,rfac=1,nCr,nPr; //declaring the variables 

    printf("Enter the values of x ,n and r [n>r]: "); //taking input from the user
    scanf("%d%d%d",&x,&n,&r);

        for(i=1; i<=n; i++) // creating a loop to find out the x^n
        {
            res=res*x;
        }

        for(i=1; i<=n; i++) //creating a loop to find out the n! nfac=1 (previously mentioned ) and initiated i=1
        {
            nfac=nfac*i;
        }
         if(n>r)  //we cant find ncr & npr if n<r 
    {
        for(i=1; i<=r; i++)
        {
            rfac=rfac*i;
        }
        for(i=1; i<=(n-r); i++)
        {
            nrfac=nrfac*i;
        }

        nPr=nfac/nrfac;
        nCr=nfac/(rfac*nrfac);
        printf("x^n=%d\n n! =%d\n nCr=%d\n nPr=%d",res,nfac,nCr,nPr);

    }
    else
        printf(" Invalid input please read the instruction again");
    return 0;
}
