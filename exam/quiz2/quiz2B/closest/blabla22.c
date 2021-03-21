int main(){
    int k=1,a;
    while(k<4){
        int j,i=k;
        for(j=0;j<i;j++){
            if((i+j)%4 == 1){
                printf("%d ",i-j);
            }
            else{
                printf("%d ",i+j);
            }
        }
        a=i+j;
        printf("\n%d\n",a);
        k++;
    }
    return 0;
}