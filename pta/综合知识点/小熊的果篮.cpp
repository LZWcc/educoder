#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,cnt=0;
    cin>>n;
    deque<deque<int>> a;
    int x;
    cin>>x;
    while(cnt<n){
        int _x = x;
        deque<int> t;
        t.push_back(++cnt);
        while(cnt<n){
            cin>>x;
            if(x!=_x)break;
            t.push_back(++cnt);
            if(cnt==n)break;
        }
        a.push_back(t);
    }
    cnt=0;
    while(cnt<n){
        while(a.front().empty())a.pop_front();
        while(a.back().empty())a.pop_back();
        for(int i=0;i<a.size();i++){
            auto&temp=a[i];
            if(temp.empty()){
                i++;
                continue;
            }
            cout << temp.front() << " ";
            temp.pop_front();
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}