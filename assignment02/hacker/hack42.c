#include <string.h>
#include <stdio.h>
 
int main()
{
    char s[1000],c;  
    int i,count=0;
 
    printf("");
    gets(s);
    
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]=='h')
    	{
          count++;
		}
        if(s[i]=='H')
    	{
          count++;
		}
 	}
     
	printf("%d",count);
 
 	 
     
    return 0;
}