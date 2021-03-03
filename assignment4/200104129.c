#include<stdio.h>
int isgcd(int ,int,int);
int islcm(int,int,int);

int main ()
{
    int num1 ,num2,num3;

    printf("Enter three values: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("GCD of %d %d %d  is %d",num1,num2,num3,isgcd(num1,num2,num3));
    printf("LCM of %d %d %d  is %d",num1,num2,num3,islcm(num1,num2,num3));
}

int isgcd(int x,int y ,int z)
{

}

int islcm(int x,int y ,int z)
{

}

