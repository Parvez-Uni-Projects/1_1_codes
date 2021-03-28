#include <stdio.h>
int main ()
{
    int i,size1,size2;
    printf("Enter the size of the first array ");
    scanf("%d",&size1);
    int first_arr[size1];

    printf("Enter the elements of the first array ");
    for(i=0;i<size1;i++)
        scanf("%d",&first_arr[i]);

    
    printf("Enter the size of the second array ");
    scanf("%d",&size2);
    int second_arr[size2];
    int third_arr[size1+size2];
    int freq[size1+size2];

    printf("Enter the elements of the second array ");
    for(i=0;i<size2;i++)
        scanf("%d",&second_arr[i]);

    for(i=0;i<size1;i++)
    
        third_arr[i]=first_arr[i];

 

    for(i=0;i<size1+size2;i++)
        third_arr[size1+i]=second_arr[i];

    

        
        

    for(i=0;i<size1+size2;i++)
        printf("%d\t",third_arr[i]);

    
}