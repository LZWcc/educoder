#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    printf("%d ", sum);
    double aver = (double)sum / 3;
    printf("%.1f", aver);
    return 0;
}
