#include <stdio.h>
long long hanoi(int num) {
	/**********Begin**********/
    if(num==0)return 0LL;
	long long sum=0LL;
    sum+=hanoi(num-1)*3LL;
    sum+=2;
    return sum;


    
    /**********End**********/
}
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%lld\n", hanoi(n));
	}
	return 0;
}
