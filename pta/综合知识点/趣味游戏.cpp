#include<iostream>
#include<algorithm>
using namespace std;

int m(int a[],int l,int r){
    int m=0,_m=0;
    for(int i=l;i<=r;i++){
        m=max(m,a[i]);
    }
    for(int i=l;i<=r;i++){
        if(a[i]==m)continue;
        _m=max(_m,a[i]);
    }
    return _m;
}

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++) cin >> a[i];
    long long sum = 0;
    for(int i=1;i<N;i++){
        for(int j=0;j<N-i;j++){
            sum+=m(a,j,j+i);
        }
    }
    cout << sum << endl;
}