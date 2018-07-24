#include <stdio.h>
#include <stdlib.h>

int main(){
    double x = 0;
    double y = 0;
    double z = 0;
    double w = 0;
    double sum = 0;

    x = 3.3;
    y = 7.14;
    z = 7.1;
    w = 7.04;

    sum = x + y - z * w;

    printf("x = %lf, y = %lf, z = %lf, w = %lf, x + y - z * w= %lf\n", x, y, z, w, sum);

    return 0;
}