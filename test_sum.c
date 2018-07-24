#include <stdio.h>
#include <stdlib.h>

int main(){
    double x = 0;
    double y = 0;
    double z = 0;
    double sum = 0;

    x = 3.3;
    y = 7.14;
    z = 7.1;

    sum = x + y - z;

    printf("x = %lf, y = %lf, z = %lf,  x + y - z = %lf\n", x, y, z, sum);

    return 0;
}