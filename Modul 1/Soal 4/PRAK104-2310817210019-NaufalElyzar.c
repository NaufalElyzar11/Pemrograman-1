#include <stdio.h>

int main() {
    int HargaA = 400000;
    int HargaB = 350000;

    int DiskonA = 13;
    int DiskonB = 21;

    int TotalA = HargaA - (HargaA * DiskonA / 100);
    int TotalB = HargaB - (HargaB * DiskonB / 100);

    printf("Harga sepatu A adalah %d\n", HargaA);
    printf("Harga sepatu B adalah %d\n", HargaB);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", DiskonA, TotalA);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", DiskonB, TotalB);

    return 0;
}
