#include<stdio.h>
int main()
{
    char chs,che;
    int as_chs,as_che,i=0;
    printf("Enter the range Alphabets\n");
    scanf("%c %c",&chs,&che);
    as_chs=(int)chs;
    as_che=(int)che;
    //printf("%d",as_chs);
    for(i=as_chs ;i<=as_che;i++)
    {
        printf("%c\t",(char)i);
    }
    return 0;
}