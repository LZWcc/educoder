#include <stdio.h>
int main()
{
    char a;
    int letter = 0, blank = 0, digit = 0, other = 0, n = 0;
    while (n < 15){
        a = getchar();
        if (a >= 65 && a <= 90 || a >= 'a' && a <= 'z'){
            letter++;
        }
        else if (a >= 48 && a <= 57){
            digit++;
        }
        else if (a == ' '){
            blank++;
        }
        else other++;
        n++;
    }
    printf("letter=%d\nblank=%d\ndigit=%d\nother=%d\n", letter, blank, digit, other);
    return 0;
}