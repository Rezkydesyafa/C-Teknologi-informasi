#include <stdio.h>
#include <math.h>
#include <time.h>


int main() {
    

    char nama_Pelanggan[50], id_Pelanggan[20];
    float tarif =  35000, waktu, biaya_bulanan = 150000, totalTagihan, tagihan, diskon = 0.0;



    printf("\nProgram Tagihan Internet Wifi\n\n");
    printf("=========== Data Pelangggan ===========\n");
    printf("---------------------------------------\n");
    printf("Masukkan Nama Pelanggan : ");
    scanf("%[^\n]s",&nama_Pelanggan);
    printf("Masukkan ID Pelanggan   : ");
    scanf("%s",&id_Pelanggan);
    printf("Masukkan waktu      : ");
    scanf("%f",&waktu); 


    tagihan = (waktu *tarif)+ biaya_bulanan; 
    diskon = (waktu >=25)*0.15*tagihan;
    totalTagihan = tagihan - diskon;

    printf("\n=========== Rincian Tagihan ===========\n");
    // printf("Tanggal: %s/TRX-%s \n", buffer,id_Pelanggan);
    printf("---------------------------------------\n");
    printf("Nama Pelanggan          : %s\n", nama_Pelanggan);
    printf("ID Pelanggan            : TRX-%s\n", id_Pelanggan);
    printf("Kecepatan               : %.f days \n", waktu);
    printf("Biaya Tetap             : Rp. %.2f\n", biaya_bulanan);
    printf("Tagihan                 : Rp. %.2f\n", tagihan);
    printf("Diskon                  : Rp. %.2f\n", diskon);
    printf("---------------------------------------\n");
    printf("Total Tagihan           : Rp. %.2f\n", totalTagihan);
    printf("---------------------------------------\n");

    return 0;
}