#include <stdio.h>
#include <math.h>
int f(int m, int n, int x, int y) {
	/**********Begin**********/
    int cnt=1,x0=1,y0=1,a[m+2][n+2],d=0;
    for(int i=0;i<=m+1;i++)for(int j=0;j<=n+1;j++)a[i][j]=(i==0||j==0||i==m+1||j==n+1)?1:0;
    a[1][1]=1;
    while(cnt<n*m){
        if(d==0){
            if(a[x0][y0+1]==0)a[x0][++y0]=++cnt;
            else d=1;
        }if(d==1){
            if(a[x0+1][y0]==0)a[++x0][y0]=++cnt;
            else d=2;
        }if(d==2){
            if(a[x0][y0-1]==0)a[x0][--y0]=++cnt;
            else d=3;
        }if(d==3){
            if(a[x0-1][y0]==0)a[--x0][y0]=++cnt;
            else d=0;
        }
    }
    return a[x][y];
	/**********End**********/
}
int main() {
	int m, n, x, y;
	scanf("%d%d%d%d", &m, &n, &x, &y);
	int ans = f(m, n, x, y);
	printf("%d\n", ans);
	return 0;
}
 