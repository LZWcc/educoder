#include <stdio.h>
#include <math.h>
long long factorial(int);
int main() {
	int i;
	int  m;
	double pi = 0, pi0 = 0, x, eps = 1e-8;
	scanf("%lf %d", &x, &m);
	for (i = 0; i < m; i++) {
		pi0 = pi;
		pi = pi + pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
		if (fabs(pi0 - pi) <= eps)
			break;
	}
	printf("%.8f", pi);
	return 0;
}
long long factorial(int n) {
	/**********Begin**********/
    if(n==0)
        return 1;
    return (long long)n*factorial(n-1);





	/**********End**********/
}