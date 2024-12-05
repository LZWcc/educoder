#include <stdio.h>

/********** Begin *********/
float Area(float r){
    return 3.14*r*r;
}

int main()
{
    float r;
    scanf("%f",&r);
    printf("%.2f",Area(r));
    return 0;
}
/********** End *********/
