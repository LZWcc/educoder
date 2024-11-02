#include <stdio.h>
#include <math.h>

int main(void){
    int flag, n;
    double eps, item, s;
    scanf("%lf", &eps);
    flag = 1;
    s = 0;
    n = 1;
    do{
        item = 1.0 / n;
        s = s + flag * item;
        flag = -flag;
        n = n + 3;
    } while (fabs(item) >= eps);
    printf("s = %f\n", s);
    return 0;
}
