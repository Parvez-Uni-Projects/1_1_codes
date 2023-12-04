#include <stdio.h>
#include <string.h>
int main ()
{
    char A[100],B[100],lenA,lenB,typo1=0,typo2=0,result=0,i,j;

    gets(A);
    gets(B);

    lenA = strlen(A);
    lenB = strlen(B);
    if(lenA == lenB+1 || lenB == lenA+1)
        typo1=1;

    if(lenA==lenB)
    {
        result=strcmp(A,B);
    }

    for(i=0;i<lenA;i++)
        {
            if(A[i]!=B[i])
                {
                    typo2++;
                }
        }


            if()
    if(typo1 == 1 )
            printf("YES\n");
    else if (typo2==1)
        printf("YES\n");
    else if (result!=0)
        printf("YES\n");
    else if (typo2==1)
        printf("YES\n");
    else
        {
            printf("NO\n");
        }   
    
}




//printf("%d",lenA);
    //printf("%d",lenB);
/*

for(i=0;i<lenA;i++)
            printf("%c",A[i]);
    if (lenA==lenB)
        {
            for(i=0;i<lenA;i++)
                {
                    for(j=0;j<lenB;j++)
                        {
                            if(A[i]==B[j])
                                {
                                    typo2++;
                                }
                        }
                }

        }
    
*/