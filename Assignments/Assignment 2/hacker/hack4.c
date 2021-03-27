#include <stdio.h>

int main(){
    char str[100];
    int n, i, j;
    for(i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    int cnt=0;
    for(i=0; i<n; i++){
        for(j=0; str[i]!=0; j++){
            if(str[i]=='h' ){
                cnt++;
            }
            if(str[i]=='H' ){
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
} 



