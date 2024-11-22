/********** Begin **********/
#include <stdio.h>
#include <string.h>

int check(int n,int a[][n],int sum0){
    int sum;
    for(int i = 0; i < n; i++){
        sum=0;
        for(int j = 0; j < n; j++)sum+=a[i][j];
        if(sum!=sum0)return 0;
    }
    for(int i = 0; i < n; i++){
        sum=0;
        for(int j = 0; j < n; j++)sum+=a[j][i];
        if(sum!=sum0)return 0;
    }
    sum=0;
    for(int i = 0; i < n; i++){
        sum+=a[n-i-1][i];
    }
    return sum==sum0;
}

int main() {
    int n,sum,sum0=0;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        sum0+=a[i][i];
    }
    if(check(n,a,sum0))printf("Yes");
    else printf("No");
}
/********** End **********/