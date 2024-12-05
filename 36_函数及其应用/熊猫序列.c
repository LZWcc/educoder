#include <stdio.h>
int panda[101] = {1, 1, 1, 1, 2 };
/**********Begin**********/


int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 5; i <= n; i++){
        panda[i] = (panda[i-1] + panda[i-4])%(107+7);
    }
    printf("%d", panda[n-1]);
}	 

/**********End**********/