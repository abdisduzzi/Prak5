#include <stdio.h>

int main(){
    int p;
    int npp, nkk;
    float np, nk, hl;

    while(p != 5){
        printf("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit\n");
        printf("Masukkan Pilihan : "); scanf("%d", &p);
        if(p == 5){printf("Terimakasih, telah menggunakan kalkulator M Izzuddin Abdis Salam\n\n");}
        else if(p < 0 || p > 5){printf("Input anda salah, silahkan coba lagi.\n\n");}
        else{
            printf("Masukkan nilai pertama : "); scanf("%f", &np);
            printf("Masukkan nilai kedua   : "); scanf("%f", &nk);
            if(p == 1){
            hl = np + nk;
            printf("Hasil Penjumlalahan antara %.2f dengan %.2f adalah %.2f\n\n", np, nk, hl);}
            else if(p == 2){
            hl = np - nk;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", np , nk, hl);}
            else if(p == 3){
            hl = np * nk;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", np , nk, hl);}
            else {
            hl = np / nk;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", np , nk, hl);}
        }
    }
return 0;}
