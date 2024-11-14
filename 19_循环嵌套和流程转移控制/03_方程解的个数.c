/********** Begin **********/
#include<stdio.h>
int main(){
    int cnt=0;
    for(int i=-55;i<=55;i++){
        for(int j=-55;j<=55;j++){
            for(int k=-55;k<=55;k++){
                if(k*k+j*j+i*i==55*55 && i<j && j<k ){
                    cnt++;
                }
            }
        }
    }
    printf("%d",cnt);
}
/********** End **********/