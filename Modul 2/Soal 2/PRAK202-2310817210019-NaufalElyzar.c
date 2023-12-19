#include <stdio.h>

int main() {
    float Nilai1;
    float Nilai2;
    float jumlah;

    printf("Masukkan Nilai Pertama :");
    scanf("%f", &Nilai1);
    printf("Masukkan Nilai Kedua :");
    scanf("%f", &Nilai2);
    
    jumlah = Nilai1 + Nilai2; 

    printf("Hasil dari penjumlahan nilai pertama \"%.0f\"", Nilai1); 
    printf(" dan nilai kedua \"%.0f\"", Nilai2); 
    printf(" adalah \"%.2f\"", jumlah); 

    return 0; 
}
