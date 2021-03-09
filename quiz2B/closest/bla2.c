#include <stdio.h>

int exam(int i);
int main()
{
    int k=1,a;
    while(k<4)
    {
        a=exam(k);
    printf("\n%d\n",a);
        k++;
}
return 0;
}

int exam(int i)
{
int j;
for(j=0;j<i;j++)
    {

    if((i+j)%4 == 1){
        printf("%d",i-j);
}
else{
printf("%d",i+j);
}

}
return i+j;
}