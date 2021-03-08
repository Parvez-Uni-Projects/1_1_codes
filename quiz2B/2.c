#include <stdio.h>
int main()
{
    int i, j, x = 0;
    for(i=9; i > 4; i--)
        for(j=4; j<i; ++j)
            {
                printf("%d\t", i - i * j + j);
                x++;
            }
    printf("\n%d", x);return 0;
    return 0;
}