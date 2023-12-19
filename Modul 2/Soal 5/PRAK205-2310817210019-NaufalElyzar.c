#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, L, K;

    scanf("%lf", &A);
    scanf("%lf", &B);

    C = sqrt((B * B) - (A * A));
    K = A + B + C;
    L = 0.5 * A * C;

    printf("Alas     : %.0lf\n", C);
    printf("Tinggi   : %.0lf\n", A);
    printf("Keliling : %.0lf\n", K);
    printf("Luas     : %.0lf cm^2\n", L);
    
    return 0;
}
