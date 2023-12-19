#include <stdio.h>

int main() {
    float a, b, i, j, x, y;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    float hasilnya = (a - b) * i / j - (x + y);

    printf("%.3f", hasilnya);

    return 0;
}
