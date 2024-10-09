#include <stdio.h>
#include <math.h>

#define JUMLAH_PAKET 3
#define HARGA_PER_GB 50000 // Harga per GB untuk penggunaan tambahan

int main() {
    float kuota_paket[JUMLAH_PAKET] = {10, 20, 50};
    float biaya_dasar[JUMLAH_PAKET] = {100000, 150000, 300000};
    int pilihan_paket;
    float penggunaan_aktual, penggunaan_tambahan, biaya_tambahan, total_tagihan;

    printf("Program Tagihan Internet Rumah\n");
    printf("==============================\n");

    printf("Pilih paket internet:\n");
    printf("1. Paket 10GB (Rp 100.000)\n");
    printf("2. Paket 20GB (Rp 150.000)\n");
    printf("3. Paket 50GB (Rp 300.000)\n");
    printf("Masukkan pilihan (1-3): ");
    scanf("%d", &pilihan_paket);

    pilihan_paket = (pilihan_paket < 1 || pilihan_paket > JUMLAH_PAKET) ? 1 : pilihan_paket;
    pilihan_paket--; // Mengubah input 1-3 menjadi indeks array 0-2

    printf("Masukkan penggunaan internet aktual (dalam GB): ");
    scanf("%f", &penggunaan_aktual);

    penggunaan_tambahan = fmaxf(penggunaan_aktual - kuota_paket[pilihan_paket], 0);
    biaya_tambahan = penggunaan_tambahan * HARGA_PER_GB;
    total_tagihan = biaya_dasar[pilihan_paket] + biaya_tambahan;

    printf("\nRincian Tagihan:\n");
    printf("Paket yang dipilih: %.0f GB\n", kuota_paket[pilihan_paket]);
    printf("Biaya dasar: Rp %.2f\n", biaya_dasar[pilihan_paket]);
    printf("Penggunaan aktual: %.2f GB\n", penggunaan_aktual);
    printf("Penggunaan tambahan: %.2f GB\n", penggunaan_tambahan);
    printf("Biaya tambahan: Rp %.2f\n", biaya_tambahan);
    printf("Total tagihan: Rp %.2f\n", total_tagihan);

    return 0;


    

}