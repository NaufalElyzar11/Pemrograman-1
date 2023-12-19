#include <stdio.h>
#include <math.h>

int main() {
    float r, t;

    scanf("%f", &r);
    scanf("%f", &t);

    // π = 22 / 7
    float V = 22 * (pow(r, 2) / 7) * t;

    float L = 2 * 22 * (r / 7) * t + 2 * 22 * (pow(r, 2) / 7);

    float K = 2 * 22 * (r / 7);

    printf("Volume bejana adalah %.2f\n", V);
    printf("Luas permukaan bejana adalah %.2f\n", L);
    printf("Keliling alas bejana adalah %.2f\n", K);

    return 0;
}
