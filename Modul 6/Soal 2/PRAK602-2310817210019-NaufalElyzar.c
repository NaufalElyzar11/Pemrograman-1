#include <stdio.h>

int main() {
    int JumlahRuangan;

    scanf("%d", &JumlahRuangan);

    int BanyaknyaZetsu[JumlahRuangan];
    int hasil;

    for (int i = 0; i < JumlahRuangan; i++) {
        scanf("%d", &BanyaknyaZetsu[i]);
    }

    for (int i = 0; i < JumlahRuangan; i++) {
        hasil = BanyaknyaZetsu[i] * (i + 1);
        printf("%d ", hasil);
    }

    return 0;
}
