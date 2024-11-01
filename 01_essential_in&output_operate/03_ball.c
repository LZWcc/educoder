#include <stdio.h>
#define PI 3.14159
int main()
{
    double r;
    scanf("%lf", &r);
    double s = (double)4 * PI * r * r;
    double v = (double)PI * r * r * r * (4.0 / 3.0);
    printf("s = %.3f\n", s);
    printf("v = %.3f", v);
    return 0;
}
