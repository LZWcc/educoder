/********** Begin **********/
#include <stdio.h>
#include <string.h>

int main() {
    char str[9][10];
    char *p[9];
    for(int i=0;i<9;i++)p[i]=str[i];
    for(int i=0;i<9;i++)scanf("%s",str[i]);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(strcmp(p[j],p[j+1])>0){
                char *temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    puts("排序前的字符串：");
    for(int i=0;i<9;i++)puts(str[i]);
    puts("排序后的字符串：");
    for(int i=0;i<9;i++)puts(p[i]);
    return 0;
}
/********** End **********/