#include <stdio.h>

int main() {
    int baris, kolom;
    
    scanf("%d %d", &baris, &kolom);
    
    int matriks[baris][kolom];
    
    for (int x = 0; x < baris; x++) {
        for (int y = 0; y < kolom; y++) {
            scanf("%d", &matriks[x][y]);
        }
    }
    
    for (int x = 0; x < baris; x++) {
        for (int y = 0; y < kolom; y++) {
            printf("%d ", matriks[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}
