#include <stdio.h>

int main(){
    char choice;
    int n = 0;
    fflush(stdin);
    choice = getchar();
    while (n < 5){
        switch (choice){
        case '0':
            exit(0);
        case '1':
            printf("苹果单价3.00元/千克\n");
            break;
        case '2':
            printf("梨单价2.5元/千克\n");
            break;
        case '3':
            printf("橘子单价4.1元/千克\n");
            break;
        case '4':
            printf("葡萄单价10.20元/千克\n");
            break;
        default:
            exit(0);
        }
        fflush(stdin);
        choice = getchar();
        n++;
    }
    return 0;
}
