#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

int main() {
    char nama[50], jenisKelamin[10], alamat [50], tanggal[50], transaction, lanjut;
    int umur, pilihanJenisLayanan, pilihanPaket, subPilihan, tekananDarah, randomNumber, layananCount = 0;
    float totalHarga = 0.0;
    char layananDipilih[5][50]; //array

    // untuk memanggil waktu saat ini 
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    strftime(tanggal, sizeof(tanggal), "%d-%m-%Y/%H:%M:%S", local);

    // untuk membuat kode transaksi
    srand(time(NULL));
    randomNumber = rand() % 900 + 50;

do{

    printf("\n      Medical Check-Up RS UNISA   \n");
    printf("====================================\n");
    printf("  Tanggal : %s   \n",tanggal);
    printf("       Masukan data Pasien \n");
    printf("------------------------------------\n");

    printf("Nama Pasien        : ");
    scanf("%s", &nama);
    printf("Umur Pasien        : ");
    scanf("%d", &umur);
    printf("Jenis Kelamin (L/P): ");
    scanf("%s", &jenisKelamin);
    printf("Alamat             : ");
    scanf("%s", &alamat);
    

    printf("====================================\n");
    printf("           Layanan Kami             \n");
    printf("====================================\n");
    printf("Pilih jenis layanan:\n");
    printf("1. Paket Medical Check-Up\n");
    printf("2. Pilih Layanan Mandiri\n");
    printf("====================================\n");
    printf("Masukkan pilihan Anda (1-2): ");
    scanf("%d", &pilihanJenisLayanan);

    if (pilihanJenisLayanan == 1) {
        printf("Paket Medical Check-Up:\n");
        printf("1. Paket Basic (Rp500,000):\n");
        printf("   - Cek Tekanan Darah, Tes Kolesterol, Tes Gula Darah\n\n");

        printf("2. Paket Comprehensive (Rp1,000,000):\n");
        printf("   - Tes EKG, Tes Fungsi Ginjal, Tes Fungsi Hati, Tes Mata\n\n");

        printf("3. Paket Premium (Rp2,000,000):\n");
        printf("   - Tes MRI, Tes CT Scan, Tes Jantung Lengkap, Tes Paru-Paru, Tes Kanker\n");

        printf("Masukkan pilihan paket (1-3): ");
        scanf("%d", &pilihanPaket);
            if (pilihanPaket == 1) {
                printf("Anda memilih Paket Basic\n");
                totalHarga += 500000;
                strcpy(layananDipilih[layananCount++], "Paket Basic");
            } else if (pilihanPaket == 2) {
                printf("Anda memilih Paket Comprehensive\n");
                totalHarga += 1000000;
                strcpy(layananDipilih[layananCount++], "Paket Comprehensive");
            } else if (pilihanPaket == 3) {
                printf("Anda memilih Paket Premium\n");
                totalHarga += 2000000;
                strcpy(layananDipilih[layananCount++], "Paket Premium");
            } else {
                printf("Pilihan paket tidak valid.\n");
            }
        
    } else if (pilihanJenisLayanan == 2) {

        printf("Layanan Mandiri:\n");
        printf("1.  Cek Tekanan Darah - Rp100,000\n");
        printf("2.  Tes Kolesterol - Rp150,000\n");
        printf("3.  Tes Gula Darah - Rp150,000\n");
        printf("4.  Tes EKG - Rp300,000\n");
        printf("5.  Tes Fungsi Ginjal - Rp250,000\n");
        printf("6.  Tes Fungsi Hati - Rp250,000\n");
        printf("7.  Tes Mata - Rp200,000\n");
        printf("8.  Tes MRI - Rp700,000\n");
        printf("9.  Tes CT Scan - Rp800,000\n");
        printf("10. Tes Jantung Lengkap - Rp500,000\n");
        printf("11. Tes Paru-Paru - Rp400,000\n");
        printf("12. Tes Kanker - Rp600,000\n");
        
        for (int i = 0; i < 5; i++) {  // Batas maksimal 5 layanan
            printf("Masukkan nomor layanan yang ingin dipilih (0 untuk selesai): ");
            scanf("%d", &subPilihan);
            
            if (subPilihan == 0) break; 
            switch (subPilihan) {
                case 1:
                    printf("Anda memilih: Cek Tekanan Darah\n");
                    totalHarga += 100000;
                    strcpy(layananDipilih[layananCount++], "Cek Tekanan Darah");
                    break;
                case 2:
                    printf("Anda memilih: Tes Kolesterol\n");
                    totalHarga += 150000;
                    strcpy(layananDipilih[layananCount++], "Tes Kolesterol");
                    break;
                case 3:
                    printf("Anda memilih: Tes Gula Darah\n");
                    totalHarga += 150000;
                    strcpy(layananDipilih[layananCount++], "Tes Gula Darah");
                    break;
                case 4:
                    printf("Anda memilih: Tes EKG\n");
                    totalHarga += 300000;
                    strcpy(layananDipilih[layananCount++], "Tes EKG");
                    break;
                case 5:
                    printf("Anda memilih: Tes Fungsi Ginjal\n");
                    totalHarga += 250000;
                    strcpy(layananDipilih[layananCount++], "Tes Fungsi Ginjal");
                    break;
                case 6:
                    printf("Anda memilih: Tes Fungsi Hati\n");
                    totalHarga += 250000;
                    strcpy(layananDipilih[layananCount++], "Tes Fungsi Hati");
                    break;
                case 7:
                    printf("Anda memilih: Tes Mata\n");
                    totalHarga += 200000;
                    strcpy(layananDipilih[layananCount++], "Tes Mata");
                    break;
                case 8:
                    printf("Anda memilih: Tes MRI\n");
                    totalHarga += 700000;
                    strcpy(layananDipilih[layananCount++], "Tes MRI");
                    break;
                case 9:
                    printf("Anda memilih: Tes CT Scan\n");
                    totalHarga += 800000;
                    strcpy(layananDipilih[layananCount++], "Tes CT Scan");
                    break;
                case 10:
                    printf("Anda memilih: Tes Jantung Lengkap\n");
                    totalHarga += 500000;
                    strcpy(layananDipilih[layananCount++], "Tes Jantung Lengkap");
                    break;
                case 11:
                    printf("Anda memilih: Tes Paru-Paru\n");
                    totalHarga += 400000;
                    strcpy(layananDipilih[layananCount++], "Tes Paru-Paru");
                    break;
                case 12:
                    printf("Anda memilih: Tes Kanker\n");
                    totalHarga += 600000;
                    strcpy(layananDipilih[layananCount++], "Tes Kanker");
                    break;
                default:
                    printf("Layanan tidak valid.\n");
            }
        }
    } else {
        printf("Pilihan tidak valid.\n");
    }

    printf("\n------------------------------------\n");
    printf("   Rincian Data Pasien dan Biaya   \n");
    printf("------------------------------------\n");
    printf("Tanggal: %s-TRX-%d \n", tanggal, randomNumber);
    printf("====================================\n");
    printf("No. transaksi : %d\n", randomNumber);
    printf("Nama          : %s\n", nama);
    printf("Umur          : %d tahun\n", umur);
    printf("Jenis Kelamin : %s\n", jenisKelamin);
    printf("Alamat        : %s\n", alamat);
    printf("------------------------------------\n");
    printf("Layanan yang Dipilih:\n");
    for (int i = 0; i < layananCount; i++) {
        printf("%d. %s\n",i+1 ,layananDipilih[i]);
    }
    printf("------------------------------------\n");
    printf("Total Biaya   : Rp%.2f\n", totalHarga);
    printf("====================================\n");
    
    printf("\nApakah ada pasien lain? (y/n): ");
    scanf(" %c", &lanjut);
}while (lanjut == 'y' || lanjut == 'Y');

    printf("---------------------------- ^-^ --------------------------------\n");
    printf("Terima kasih telah menggunakan layanan Medical Check-Up RS UNISA!\n");

    return 0;
}
