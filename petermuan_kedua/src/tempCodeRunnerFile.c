#include <stdio.h>
#include <math.h>
#include <time.h>


int main() {
    

    char nama_Pelanggan[50], id_Pelanggan[20];
    float tarif = 5000, kecepatan, biaya_tetap = 100000, totalTagihan, tagihan, diskon = 0.0;

    time_t waktu_sekarang;
    struct tm *info_waktu;
    char buffer[20];

    time(&waktu_sekarang);
    info_waktu = localtime(&waktu_sekarang);
    strftime(buffer, sizeof(buffer), "%d/%m/%Y", info_waktu);




    printf("\nProgram Tagihan Internet Wifi\n\n");
    printf("=========== Data Pelangggan ===========\n");
    printf("---------------------------------------\n");
    printf("Masukkan Nama Pelanggan : ");
    scanf("%[^\n]s",&nama_Pelanggan);
    printf("Masukkan ID Pelanggan   : ");
    scanf("%s",&id_Pelanggan);
    printf("Masukkan Kecepatan      : ");
    scanf("%f",&kecepatan); 


    tagihan = kecepatan *tarif+ 