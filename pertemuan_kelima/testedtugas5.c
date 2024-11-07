#include <stdio.h>
#include <string.h>

int main() {
    char nama[50], jenisKelamin[10], lanjut;
    int umur, pilihan, jumlahPasien = 0;
    float totalBiaya = 0;
   do  
    {
        printf("------------------------------------\n");
        printf("     Medical Check-Up RS UNISA   \n");
        printf("------------------------------------\n");
        printf("Masukkan data pasien ke-%d\n", jumlahPasien + 1);
        printf("------------------------------------\n");
        printf("Nama Pasien: ");
        scanf(" %[^\n]s", nama);
        printf("Umur: ");
        scanf("%d", &umur);
        printf("Jenis Kelamin (L/P): ");
        scanf(" %s", jenisKelamin);
        
        do {
            printf("\nPilih Paket Medical Check Up:\n");
            printf("1. Layanan Basic (Rp. 800.000)\n");
            printf("   Cek Tekanan Darah\n");
            printf("   Cek Gula Darah\n");
            printf("   Cek Kolesterol\n");
            
            printf("2. Layanan Extra (Rp. 1.600.000)\n");
            printf("   Semua pemeriksaan Basic\n");
            printf("   Rontgen Dada\n");
            printf("   EKG Jantung\n");
            
            printf("3. Layanan Executive (Rp. 2.500.000)\n");
            printf("   Semua pemeriksaan Premium\n");
            printf("   CT Scan\n");
            printf("   Pemeriksaan Kanker\n");
            
            printf("Pilihan Anda (1-3): ");
            scanf("%d", &pilihan);
            
            // Nested if untuk menghitung biaya
            if (pilihan >= 1 && pilihan <= 3) {
                float biaya = 0;
                if (pilihan == 1) {
                    biaya = 800000;
                } else if (pilihan == 2) {
                    biaya = 1600000;
                } else {
                    biaya = 2500000;
                }
                
                // Diskon berdasarkan umur
                if (umur > 60) {
                    printf("\nAnda mendapat diskon 20%% untuk lansia\n");
                    biaya = biaya - (biaya*0.20);
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
        
        
        printf("\nApakah ada pasien lain? (y/n): ");
        scanf(" %c", &lanjut);
        
    } while (lanjut == 'y' || lanjut == 'Y');
    printf("\n----------------------------------\n");
    printf("    Rincian Data Pasien dan Biaya\n");
    printf("------------------------------------\n");
    printf("Jumlah Pasien: %d\n", jumlahPasien);
    printf("Total Biaya Keseluruhan: Rp. %.2f\n", totalBiaya);
    printf("Rata-rata Biaya per Pasien: Rp. %.2f\n", totalBiaya/jumlahPasien);
    printf("Terima kasih telah menggunakan layanan Medical Check-Up RS UNISA!\n");

    
    return 0;
}

