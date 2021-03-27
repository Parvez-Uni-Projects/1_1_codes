//Write a program to merge two arrays removing the duplicate elements.

#include <stdio.h>
int main()

{
    int num1, num2,i,j,k; //declaring the variables

    printf("Enter the length of array 1: "); //taking the size of the array 
    scanf("%d", &num1);
    int first_arr[num1];

    printf("Enter the elements of the array: ");//scanning the elements of the array 
    for(int i = 0; i < num1; i++)
        scanf("%d", &first_arr[i]);

    
    printf("Enter the length of the array 2: "); //taking the size of the array 
    scanf("%d", &num2);
    int second_arr[num2];
    int arr3[num1+num2];

    printf("Enter the elements of the array: ");//scanning the elements of the array 
    for(int i = 0; i < num2; i++)
        scanf("%d", &second_arr[i]);
    
    
    for(i = 0, j = 0, k = 0; (i < num1) && (j < num2); ) //merging the two arrays in one array and initializing the values
    {

        if(first_arr[i] < second_arr[j]) //finding merging them in a third array 
        {
            
            arr3[k] = first_arr[i];
            i++;
            k++;
        }
        else if(first_arr[i] > second_arr[j])
        {
            
            arr3[k] = second_arr[j];
            j++;
            k++;
        }
        else{

            arr3[k] = first_arr[i];
            i++;
            j++;
            k++;
        }
    }
    if (i < num1) //removing the duplicate array 
    {

        for(; i < num1; i++)
        {
            arr3[k] = first_arr[i];
            k++;
        }
    }
    else if(j < num2){
        
        for(; j < num2; j++){
            arr3[k] = second_arr[j];
            k++;
        }
    }

    printf("Output array: ");
    for(i = 0; i < k; i++)
        printf("%d ", arr3[i]);
    
    return 0;
}
