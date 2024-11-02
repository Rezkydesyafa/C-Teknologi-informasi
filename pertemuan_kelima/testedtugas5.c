#include <stdio.h>
#include <string.h>

int main() {
    char nama[50], jenisKelamin[10], lanjut;
    int umur, pilihan, jumlahPasien = 0;
    float totalBiaya = 0;
    
    do {
        // Input data pasien
        printf("\n=== PROGRAM MEDICAL CHECK UP RS UNISA ===\n");
        printf("Masukkan data pasien ke-%d\n", jumlahPasien + 1);
        printf("Nama Pasien: ");
        scanf(" %[^\n]s", nama);
        printf("Umur: ");
        scanf("%d", &umur);
        printf("Jenis Kelamin (L/P): ");
        scanf(" %s", jenisKelamin);
        
        do {
            // Menu paket Medical Check Up
            printf("\nPilih Paket Medical Check Up:\n");
            printf("1. Paket Basic (Rp. 500.000)\n");
            printf("   - Cek Tekanan Darah\n");
            printf("   - Cek Gula Darah\n");
            printf("   - Cek Kolesterol\n");
            
            printf("2. Paket Premium (Rp. 1.500.000)\n");
            printf("   - Semua pemeriksaan Basic\n");
            printf("   - Rontgen Dada\n");
            printf("   - EKG Jantung\n");
            
            printf("3. Paket Executive (Rp. 3.000.000)\n");
            printf("   - Semua pemeriksaan Premium\n");
            printf("   - CT Scan\n");
            printf("   - Pemeriksaan Kanker\n");
            
            printf("Pilihan Anda (1-3): ");
            scanf("%d", &pilihan);
            
            // Nested if untuk menghitung biaya
            if (pilihan >= 1 && pilihan <= 3) {
                float biaya = 0;
                if (pilihan == 1) {
                    biaya = 500000;
                } else if (pilihan == 2) {
                    biaya = 1500000;
                } else {
                    biaya = 3000000;
                }
                
                // Diskon berdasarkan umur
                if (umur > 60) {
                    printf("\nAnda mendapat diskon 20%% untuk lansia\n");
                    biaya = biaya * 0.8;
                } else if (umur < 12) {
                    printf("\nAnda mendapat diskon 15%% untuk anak-anak\n");
                    biaya = biaya * 0.85;
                }
                
                totalBiaya += biaya;
                printf("\nBiaya Medical Check Up: Rp. %.2f\n", biaya);
                break;
            } else {
                printf("Pilihan tidak valid! Silakan pilih 1-3\n");
            }
        } while (1);
        
        jumlahPasien++;
        
        // Tanya apakah ada pasien lain
        printf("\nApakah ada pasien lain? (y/n): ");
        scanf(" %c", &lanjut);
        
    } while (lanjut == 'y' || lanjut == 'Y');
    
    // Tampilkan ringkasan
    printf("\n=== RINGKASAN MEDICAL CHECK UP ===\n");
    printf("Jumlah Pasien: %d\n", jumlahPasien);
    printf("Total Biaya Keseluruhan: Rp. %.2f\n", totalBiaya);
    printf("Rata-rata Biaya per Pasien: Rp. %.2f\n", totalBiaya/jumlahPasien);
    
    return 0;
}