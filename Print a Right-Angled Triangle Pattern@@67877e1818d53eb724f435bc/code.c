#include<stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
}