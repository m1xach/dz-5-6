#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    double r;
    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);
    r = sqrt(pow(2.0 + y, 2.0) + pow((sin(y + 5.0)), 1.0 / 7.0)) / (log(x + 1.0) - pow(y, 3.0));
    printf("F(x, y) = %.6f\n", r);

    return 0;
}