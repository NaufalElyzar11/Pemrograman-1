#include <stdio.h>

int main() {
    double YuZhong = 958730.0;

    int Pahlawan = 5;

    double Jawaban = YuZhong / Pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %.0lf\n", YuZhong);
    printf("Jumlah pahlawan = %d\n", Pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.0lf pasukan\n", Jawaban);

    return 0;
}
