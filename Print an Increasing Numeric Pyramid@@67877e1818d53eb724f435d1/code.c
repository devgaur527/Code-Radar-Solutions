#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-i;j++) {              //loop for space
           printf(" ");
        }
        for(int k=1;k<=n;k++ ){
            printf("%d ",k);
        } 
        printf("\n");
    }
    return 0;
}