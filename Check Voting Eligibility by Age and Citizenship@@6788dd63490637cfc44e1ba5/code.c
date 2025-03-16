#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the age: and citizenship:");
    scanf("%d %d",&a, &b);
    if(a>=18 &&b==1){printf("Eligible");}
    else(printf("Not Eligible");)
    return 0;
}