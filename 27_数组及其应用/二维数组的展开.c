/********** Begin **********/
#include <stdio.h>
#include <string.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    char str[m][n+5];
    for (int i = 0; i < m; i++)scanf("%s[^\n]", str[i]);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)printf("%c", str[j][i]);
    }
}
/********** End **********/