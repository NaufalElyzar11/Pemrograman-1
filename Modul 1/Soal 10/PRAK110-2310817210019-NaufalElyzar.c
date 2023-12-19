#include <stdio.h>
#include <math.h>

int main() {
    double alas = 5.0;  
    double tinggi = 12.0;   

    double sisi_a = tinggi;
    double sisi_b = alas;

    double sisi_c = sqrt(sisi_a * sisi_a + sisi_b * sisi_b);

    double keliling = sisi_a + sisi_b + sisi_c;

    double luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %.0lf cm\n", alas);
    printf("Tinggi = %.0lf cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0lf cm\n", sisi_a);
    printf("Sisi B = %.0lf cm\n", sisi_b);
    printf("Sisi C = %.0lf cm\n", sisi_c);  
    printf("Keliling = %.0lf cm\n", keliling);
    printf("Luas = %.0lf cm\n", luas);

    return 0;
}
