#include <stdio.h>
#include <string.h>

int main(){
    char Rill[100];
    char Fek[100];
    scanf("%[^\n]%*c", &Rill);
    scanf("%[^\n]%*c", &Fek);
    int kode,pesan,x,i=0,j=0;
    kode=strlen(Rill);
    pesan=strlen(Fek);
    if(kode !=pesan){
        printf("\nPanjang kalimat berbeda, pesan palsu");}
    else{
        for(x=0; x<kode; x++){
            if(Rill[x]==Fek[x]){
                if (Rill[x] == ' '){
                    printf(" ");}
                else {
                    printf("*");
                    i++;}
                }
            else{
                printf("#");
                j++;}
        }
    printf("\n* = %d",i);
    printf("\n# = %d",j);
    if(i >= j){
        printf("\nPesan Asli");}
    else{
        printf("\nPesan Palsu");}
    return 0;
    }
}

