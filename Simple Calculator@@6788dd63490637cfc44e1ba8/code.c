 #include<stdio.h>
int main(){
    int a,b,c;
    
    scanf("%d%d%c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        if(b!=0)
        printf("%d", a/b);
        else
        printf("error");
        break;
       
    }
    return 0;
}