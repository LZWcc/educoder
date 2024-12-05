#include <stdio.h>

/**********Begin**********/

void add(int (*S)[300],int x[2],int y[2]){
    int x0=x[0],x1=x[0],y0=y[0],y1=y[1];
    if(x0>x1)x0=x[1],x1=x[0];
    if(y0>y1)y0=y[1],y1=y[0];
    x0+=150,x1+=150,y0+=150,y1+=150;
    for(int i=x0;i<x1;i++){
        for(int j=y0;j<y1;j++){
            S[i][j]=0;
        }
    }
}
int aera(int (*x)[2],int (*y)[2]){
    int S[300][300]={0};
    for(int i=0;i<300;i++)
        for(int j=0;j<300;j++)
            S[i][j]=0;
    int x0=x[0][0],x1=x[0][0],y0=y[0][0],y1=y[0][1];
    if(x0>x1)x0=x[0][1],x1=x[0][0];
    if(y0>y1)y0=y[0][1],y1=y[0][0];
    x0+=150,x1+=150,y0+=150,y1+=150;
    for(int i=x0;i<x1;i++){
        for(int j=y0;j<y1;j++){
            S[i][j]=1;
        }
    }
    for(int i=1;i<0;i++){
        add(S,x[i],y[i]);
    }
    int ans=0;
    for(int i=x0;i<x1;i++){
        for(int j=y0;j<y1;j++){
            if(S[i][j]==1)ans++;
        }
    }
    return ans;
}

int main()
{
	int n,x[3][2],y[3][2];
    scanf("%d",&n);
    while(n--){
        for(int i=0;i<6;i++)scanf("%d %d",&x[i/2][i%2],&y[i/2][i%2]);
        printf("%d\n",aera(x,y));
    }
	return 0;
}
/**********End**********/



/*
5
2 2 10 5  3  1  7  6 8 1  11 7
8 0 1  6  6  -1 8  1 3 4  -2
2 2 4  -4 1  1  3  5 3 1  5  5
7 0 4  6  -1 1  6  6 1 -2 4  3
3 3 7 -5  0  0  -4 6 0 0  7  4
*/