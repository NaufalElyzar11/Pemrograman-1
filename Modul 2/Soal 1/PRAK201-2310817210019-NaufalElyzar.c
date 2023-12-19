#include <stdio.h>
#include <string.h>

int main() {
    char NamaLengkap[100];
    char NIM[100];
    char KelasParalel[100];
    char TTL[100];
    char Alamat[100];
    char Hobi[100];
    char NoHP[100];

    printf("Nama                 : ");
    fgets(NamaLengkap, sizeof(NamaLengkap), stdin);
    NamaLengkap[strcspn(NamaLengkap, "\n")] = '\0';

    printf("NIM                  : ");
    fgets(NIM, sizeof(NIM), stdin);
    NIM[strcspn(NIM, "\n")] = '\0';

    printf("Kelas Paralel        : ");
    fgets(KelasParalel, sizeof(KelasParalel), stdin);
    KelasParalel[strcspn(KelasParalel, "\n")] = '\0';

    printf("Tempat Tanggal Lahir : ");
    fgets(TTL, sizeof(TTL), stdin);
    TTL[strcspn(TTL, "\n")] = '\0';

    printf("Alamat               : ");
    fgets(Alamat, sizeof(Alamat), stdin);
    Alamat[strcspn(Alamat, "\n")] = '\0';

    printf("Hobby                : ");
    fgets(Hobi, sizeof(Hobi), stdin);
    Hobi[strcspn(Hobi, "\n")] = '\0';

    printf("No. HP               : ");
    fgets(NoHP, sizeof(NoHP), stdin);
    NoHP[strcspn(NoHP, "\n")] = '\0';

    printf("Nama                 : %s\n", NamaLengkap);
    printf("NIM                  : %s\n", NIM);
    printf("Kelas Paralel        : %s\n", KelasParalel);
    printf("Tempat Tanggal Lahir : %s\n", TTL);
    printf("Alamat               : %s\n", Alamat);
    printf("Hobby                : %s\n", Hobi);
    printf("No. HP               : %s\n", NoHP);

    return 0;
}
