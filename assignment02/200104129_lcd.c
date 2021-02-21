
#include <stdio.h>
int main()
{
    int x, y,z, i,lcd,min;

    printf("Enter three numbers: "); //taking input from the user
    scanf("%d %d %d", &x, &y,&z);

min=(x<y && x<z) ? x : (y<z) ? y :z ; //finding the minmum number

    for(i=min ; ; ++i)
    {
        if(x%i==0 && y%i==0 && z%i==0)//checking the condition if they are devisable 
        {
            lcd=i;
            break;

        }
        printf("LCD is %d ",lcd);
        return 0;
    }
}