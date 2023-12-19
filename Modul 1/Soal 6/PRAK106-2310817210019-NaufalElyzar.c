#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    int Jawaban1 = (a = b) ? 0 : 1;
    int Jawaban2 = (b > c) ? 1 : 0;
    int Jawaban3 = (a != c) ? 1 : 0;

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", Jawaban1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", Jawaban2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", Jawaban3);

    return 0;
}
