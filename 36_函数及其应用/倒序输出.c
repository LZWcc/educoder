#include <stdio.h>
void Rua();
int main() {
	Rua();//调用递归函数
	return 0;
}

void Rua() {
	/**********Begin**********/
    int n;
    if(scanf("%d", &n)!=EOF)Rua();
    else return;
    printf("%d\n", n);
	/**********End**********/
}