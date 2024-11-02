#include <stdio.h>

main(){
    float usage, cost; // usage表示用电量，cost电费
    scanf("%f", &usage);
    /********请在下面书写正确的分支语句以实现题目要求*/
    cost = usage > 50 ? (usage * 0.53 + (usage - 50) * 0.05) : usage * 0.53;
    /*********************************************/
    printf("cost=%.2f", cost);
}