#include <stdio.h>

void fibonacciSeries(int n){
    int a = 0;
    int b = 1;
    if (n<2){
        printf("%d",0);
        return;
    }
   printf("%d %d",a,b);
    for (int i=2;i<n;i++){
      int c = a+b;
        a = b;
        b = c;
        printf(" %d",c);
    }
}