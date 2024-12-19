#include <iostream>
#include <vector>
using namespace std;
const int mod = 998244353;

int c_sum(vector<vector<int>>& g);
int f_sum(vector<vector<int>>& g);

int main() {
    int T,id;
    cin >> T >> id;
    if(id != 0)return 1;
    while(T--){
        int n,m,c,f;
        cin >> n >> m >> c >> f;
        vector<vector<int>> g(n,vector<int>(m));
        for(auto&i:g){
            string s;
            cin >> s;
            for(int j=0;j<m;j++){
                i[j]=s[j]=='1';
            }
        }
        cout << c*c_sum(g) % mod << " " << f*f_sum(g) % mod << endl;
    }
}

int c_sum(vector<vector<int>>& g){
    int cnt = 0;
    for(int i=0;i<g.size()-2;i++){
        for(int j=0;j<g[i].size()-1;j++){
            if(g[i][j]||g[i+1][j])continue;
            int cnt_i = 0;
            for(int k=j+1;k<g[i].size();k++){
                if(g[i][k] == 1)break;
                cnt_i++;
            }
            int cnt_j = 0;
            for(int k=i+2;k<g.size();k++){
                if(g[k][j] == 1)break;
                for(int l=j+1;l<g[k].size();l++){
                    if(g[k][l] == 1)break;
                    cnt_j++;
                }
            }
            cnt += cnt_i*cnt_j;
            cnt %= mod;
        }
    }
    return cnt;
}

int f_sum(vector<vector<int>>& g){
    int cnt = 0;
    for(int i=0;i<g.size()-2;i++){
        for(int j=0;j<g[i].size()-1;j++){
            if(g[i][j]||g[i+1][j])continue;
            int cnt_i = 0;
            for(int k=j+1;k<g[i].size();k++){ // 向右
                if(g[i][k] == 1)break;
                cnt_i++;
            }
            int cnt_j = 0;
            for(int k=i+2;k<g.size()-1;k++){ // 向下
                if(g[k][j]||g[k+1][j])break;
                int cnt_k = 0;
                for(int l=j+1;l<g[k].size();l++){ // 向右
                    if(g[k][l] == 1)break;
                    cnt_k++;
                }
                int cnt_l = 0;
                for(int l=k+1;l<g.size();l++){ // 向下
                    if(g[l][j])break;
                    cnt_l++;
                }
                cnt_j += cnt_k*cnt_l;
            }
            cnt += cnt_i*cnt_j;
            cnt %= mod;
        }
    }
    return cnt;
}