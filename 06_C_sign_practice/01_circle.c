#include <stdio.h>
int main()
{
    float r, s, c;
    /*********begin*********/
    scanf("%f", &r);
    s = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("请输入圆半径r:圆面积S=%.6f,圆周长C=%.6f", s, c);
    /*********end*********/
    return 0;
}
