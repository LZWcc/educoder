/********** Begin **********/
#include <stdio.h>
int main() {
    int cnt=0;
    char ch;
    while((ch=getchar())!=EOF&&ch!='\n'){
        cnt++;
        if(cnt%2==0||ch%2==0){
            putchar(ch);
        }
    }
}
/********** End **********/