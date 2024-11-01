#include <stdio.h>
int main()
{
    int a, b, c, d, m, n;
    scanf("%d", &a);
    /********** Begin *********/
    b = a / 1000 % 10;
    c = a / 100 % 10;
    d = a / 10 % 10;
    m = a % 10;
    n = m * 1000 + d * 100 + c * 10 + b;
    /********** End **********/
    printf("重新组合后:%d", n);
    return 0;
}
