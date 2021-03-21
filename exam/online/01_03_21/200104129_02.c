#include <stdio.h>
int area();
int main()

{
    int num1,num2;

    printf("Enter the height and width: ");
    scanf("%d%d",&num1,&num2);

    printf("The area is %d",area(num1,num2));

}
int area(int x,int y)
{
    int area= x*y;

    return area;
}