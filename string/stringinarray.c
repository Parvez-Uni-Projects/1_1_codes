#include <stdio.h>
#include <string.h>
int main ()
{
    char str[20][20];
    int i,size;

    printf("How many strings do you print ");
    scanf("%d",&size);
    
    printf("Enter the strings \n");
    for (i=0;i<size;i++)
    {   
        scanf("%s",str[i]);
        //fgets(str,4,stdin);
        //scanf("%[^\n]s", str[i]);
        //gets(str);
    }
    // for (i=0;i<size;i++)
    // {   
        printf("%s\t",str[i]);
    //     printf("%s\t",strlwr(str[i]));
    //     printf("%s\t",strupr(str[i]));
    //     printf("%s\t",strrev(str[i]));
    //     printf("%d\n",strlen(str[i]));
        

    //     printf("\n");
    // } 
    return 0;
}