#include <stdio.h>
#include <math.h>
int main()
{
    /*********begin*********/
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float res = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%.2f", res);
    /*********end*********/
    return 0;
}
