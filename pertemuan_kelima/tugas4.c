#include <stdio.h>

int main() {
    char nama[50];
    int usia;

    printf("Input Data Diri menggunakan for loop:\n");
    for (int i = 1; i <= 15; i++) {
        printf("Data ke-%d\n", i);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]%*c", nama);
        printf("Masukkan Usia: ");
        scanf("%d", &usia);
        printf("Nama: %s, Usia: %d\n\n", nama, usia);
    }

}