#include <stdio.h>
int main()
{
    double t, a, v0, v, s;
    /*********begin*********/
    scanf("%lf %lf %lf", &t, &a, &v0);
    v = v0 + a * t;
    s = v0 * t + 0.5 * a * t * t;
    printf("当初始速度为%.6lf时\n", v0);
    printf("%.6lfs时的速度为%.6lf\n", t, v);
    printf("%.6lfs时的位移为%.6lf", t, s);
    /*********end*********/
    return 0;
}
