#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n >= 80){
        printf("A");
    }
    else if (n > 69 && n < 80){
        printf("B");
    }
    else if (n > 59 && n < 70){
        printf("C");
    }
    else if (n > 49 && n < 60){
        printf("D");
    }
    else if (n < 50){
        printf("E");
    }

    return 0;
}