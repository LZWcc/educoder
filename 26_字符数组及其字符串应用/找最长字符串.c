/********** Begin **********/
#include <stdio.h>
#include <string.h>
int main() {
    int len=0,n;
    char *max;
    scanf("%d", &n);
    char str[n][100];
    while (n--)
    {
        scanf("%s[^\n]", str[n]);
        if(len<strlen(str[n])){
            len=strlen(str[n]);
            max=str[n];
        }
    }
    puts(max);
}
/********** End **********/