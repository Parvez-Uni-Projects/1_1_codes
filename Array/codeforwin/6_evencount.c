#include <stdio.h>
int main ()
{
    int i,size,counteven=0,countodd=0;

    printf("Enter the length of the array ");
    scanf("%d",&size);

    int a[size];

    printf("Enter the element of the array ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(i=0;i<size;i++)
        {
            if(a[i]%2==0)
                counteven++;
            else
                countodd++;
        }

    printf("%d Even numbers and %d Odd numbers",counteven,countodd);

    return 0;
}