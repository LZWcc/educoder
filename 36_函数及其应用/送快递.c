#include <stdio.h>
#include <math.h>
long long D(int n) {
	/**********Begin**********/
    if(n==1)return 0;
    if(n==0)return 1;
    return (n-1)*(D(n-1)+D(n-2));


	/**********End**********/
}
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		printf("%lld\n", D(n));
	}
} 