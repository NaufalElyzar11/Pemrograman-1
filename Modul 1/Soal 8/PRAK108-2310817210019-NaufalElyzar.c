#include <stdio.h>
#include <math.h>

int main() {
    double jarak = 14;
    int putaran = 5; 

    double jari_jari = jarak / (2 * M_PI * putaran);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.lf Kilometer\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2lf Kilometer\n", jari_jari);

    return 0;
}
