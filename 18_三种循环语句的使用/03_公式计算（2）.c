/********** Begin **********/
#include<stdio.h>
#include<math.h>

#define ln log

int main(){
    int m;
    scanf("%d",&m);
    double res = 0;
    for(int i=1;i<=m;i++){
        res += ln(i);
    }
    printf("s = %f",sqrt(res));
}




/********** End **********/