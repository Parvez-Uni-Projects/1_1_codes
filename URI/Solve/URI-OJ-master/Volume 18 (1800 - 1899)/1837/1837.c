#include <stdio.h>

int main() {
    int a, b, c, d, e, f, q, r;
    scanf("%d %d", &a, &b);
    
    if (a < 0) 
    {
        e = b;
        if (b < 0)
        {
            e = b * -1;
        }
         
        for (r = 0; r < e; r++) 
        {
            f = a-r;
            if (f % b == 0) 
            break;
        }
        printf("%d %d\n", f/b, r);
    }
    else {
        printf("%d %d\n", a/b, a%b);
    }
    return 0;
}