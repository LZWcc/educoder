#include <stdio.h>

int main(){
    double x, y;
    scanf("%lf", &x);
    if (x == 10){
        y = 1 / x;
    }
    else if (x != 10){
        y = x;
    }
    printf("f(%.1f)=%.1f", x, y);
}