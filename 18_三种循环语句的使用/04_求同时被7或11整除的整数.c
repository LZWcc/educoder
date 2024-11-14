/********** Begin **********/
#include<stdio.h>
int main(){
    int cnt = 0;
    for(int i=1;i<=1000;i++){
        if((i%7==0)^(i%11==0)){
            cnt++;
            printf("%-5d",i);
            if(cnt%8==0)printf("\n");
        }
    }
}
/********** End **********/