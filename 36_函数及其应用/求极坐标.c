#include <stdio.h>
#include <math.h>
int main()
{
	/**********Begin**********/
    int n;
    scanf("%d", &n);
    double r, theta, x, y;
    while(n--){
        scanf("%lf %lf", &x, &y);
        r = sqrt(x*x + y*y);
        theta = atan2(y, x);
        printf("%.7lf %.7lf\n", r, theta);
    }
	/**********End**********/
	return 0;
}