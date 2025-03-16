#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'A':
        printf("%c",Excellent);
        break;
         case 'B':
        printf("%c",Good);
        break;
         case 'C':
        printf("%c",Average);
        break;
         case 'D':
        printf("%c",Below Average);
        break;
         case 'F':
        printf("%c",Fail);
        break;
        default : printf("Invalid grade");
    }
}