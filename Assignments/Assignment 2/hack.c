/*#include <stdio.h>

void main(){
    int num,i,ctr,stno,enno;

    printf("Input starting number of range: ");
    scanf("%d%d",&stno,&enno);

   
  
    for(num = stno;num<=enno;num++)
       {
         ctr = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==0){
                 ctr++;
                 break;
             }
        }
        
         if(ctr==0 && num!= 1)
             printf("%d\n",num);
    }
printf("\n");  
}

*/

#include <string.h>
 
int main()
{
    char s[1000],c;  
    int i,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]=='')
    	{
          count++;
		}
 	}
     
	printf("character '%c' occurs %d times \n ",c,count);
 
 	 
     
    return 0;
}