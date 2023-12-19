    #include <stdio.h>

    int main() {
        int n;
        scanf("%d", &n);
        
        if (n > 0 && n < 10){
            printf("Satuan");
        }
        else if (n > 10 && n < 20){
            printf("Belasan");
        }
        else if (n > 20 && n < 100){
            printf("Puluhan");
        }
        else if (n == 0){
            printf("Nol");
        }
        else if (n > 99){
            printf("Anda Menginput Melebihi Limit Bilangan");
        }

        return 0;
    }
