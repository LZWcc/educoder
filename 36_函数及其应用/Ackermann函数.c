#include <stdio.h>
int ack(int, int);
int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d", ack(m, n));
	return 0;
}

int ack(int m, int n) {
	/**********Begin**********/
	if(m == 0) {
		return n + 1;
	}
	if(n == 0) {
		return ack(m - 1, 1);
	}
	return ack(m - 1, ack(m, n - 1));
	/**********End**********/
}