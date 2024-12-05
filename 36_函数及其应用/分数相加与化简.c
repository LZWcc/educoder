#include <stdio.h>
#include <math.h>
int gcd(int, int);
int main() {
	int T;
	int a, b, c, d, e, f, g;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		e = a * d + c * b; //分子分母进行通分
		f = b * d;
		g = gcd(e, f);
		e /= g;
		f /= g;
		printf("%d %d\n", e, f);
	}
	return 0;
}

int gcd(int a, int b) {
	/**********Begin**********/
	if(b==0)return a;
    return gcd(b,a%b);


	
    /**********End**********/
}