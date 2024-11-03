#include <stdio.h>
#include <string.h>
#include <time.h>  // Pustaka untuk mendapatkan waktu

// Struct untuk menyimpan data pasien
struct Pasien {
    char nama[50];
    int umur;
    char jenisKelamin[10];
    char alamat[100];
};

// Fungsi untuk memeriksa apakah layanan sudah dipilih
int layananSudahDipilih(char layananDipilih[][50], int count, const char *layanan) {
    for (int i = 0; i < count; i++) {
        if (strcmp(layananDipilih[i], layanan) == 0) {
            return 1; // Layanan sudah ada dalam daftar
        }
    }
    return 0; // Layanan belum ada dalam daftar
}

int main() {
    struct Pasien pasien;
    int pilihanJenisLayanan, pilihanPaket, subPilihan;
    int i;
    float totalHarga = 0.0;
    char layananDipilih[5][50]; // Array untuk menyimpan nama layanan yang dipilih
    int layananCount = 0;

    // Mendapatkan waktu saat ini
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    // Format tanggal dan waktu
    char tanggal[100];
    strftime(tanggal, sizeof(tanggal), "%d-%m-%Y %H:%M:%S", local);

    // Menampilkan waktu dan tanggal saat ini
    printf("====================================\n");
    printf("       Medical Check-Up RS UNISA\n");
    printf("   Tanggal: %s\n", tanggal);
    printf("====================================\n");

    // Input data pasien
    printf("Data Diri Pasien\n");
    printf("====================================\n");
    printf("Nama Pasien: ");
    getchar();  // Membersihkan input buffer
    fgets(pasien.nama, sizeof(pasien.nama), stdin);
    pasien.nama[strcspn(pasien.nama, "\n")] = '\0';  // Menghilangkan newline

    printf("Umur Pasien: ");
    scanf("%d", &pasien.umur);
    
    printf("Jenis Kelamin (L/P): ");
    scanf("%s", pasien.jenisKelamin);
    
    printf("Alamat: ");
    getchar();
    fgets(pasien.alamat, sizeof(pasien.alamat), stdin);
    pasien.alamat[strcspn(pasien.alamat, "\n")] = '\0';

    // Menampilkan pilihan jenis layanan
    do {
        printf("====================================\n");
        printf("     Medical Check-Up RS UNISA\n");
        printf("====================================\n");
        printf("Pilih jenis layanan:\n");
        printf("1. Paket Medical Check-Up\n");
        printf("2. Pilih Layanan Mandiri\n");
        printf("====================================\n");
        printf("Masukkan pilihan Anda (1-2): ");
        scanf("%d", &pilihanJenisLayanan);

        if (pilihanJenisLayanan == 1) {
            // Menampilkan dan memilih Paket
            printf("Paket Medical Check-Up:\n");
            printf("1. Paket Basic (Rp500,000):\n");
            printf("   - Cek Tekanan Darah, Tes Kolesterol, Tes Gula Darah\n\n");

            printf("2. Paket Comprehensive (Rp1,000,000):\n");
            printf("   - Tes EKG, Tes Fungsi Ginjal, Tes Fungsi Hati, Tes Mata\n\n");

            printf("3. Paket Premium (Rp2,000,000):\n");
            printf("   - Tes MRI, Tes CT Scan, Tes Jantung Lengkap, Tes Paru-Paru, Tes Kanker\n");

            printf("Masukkan pilihan paket (1-3): ");
            scanf("%d", &pilihanPaket);
            
            // Menggunakan perulangan for untuk menghitung total berdasarkan paket
            for (i = 1; i <= 1; i++) {  // Perulangan di sini hanya satu kali untuk memilih paket
                if (pilihanPaket == 1) {
                    printf("Anda memilih Paket Basic\n");
                    if (!layananSudahDipilih(layananDipilih, layananCount, "Paket Basic")) {
                        totalHarga += 500000;
                        strcpy(layananDipilih[layananCount++], "Paket Basic");
                    } else {
                        printf("Layanan 'Paket Basic' sudah dipilih sebelumnya.\n");
                    }
                } else if (pilihanPaket == 2) {
                    printf("Anda memilih Paket Comprehensive\n");
                    if (!layananSudahDipilih(layananDipilih, layananCount, "Paket Comprehensive")) {
                        totalHarga += 1000000;
                        strcpy(layananDipilih[layananCount++], "Paket Comprehensive");
                    } else {
                        printf("Layanan 'Paket Comprehensive' sudah dipilih sebelumnya.\n");
                    }
                } else if (pilihanPaket == 3) {
                    printf("Anda memilih Paket Premium\n");
                    if (!layananSudahDipilih(layananDipilih, layananCount, "Paket Premium")) {
                        totalHarga += 2000000;
                        strcpy(layananDipilih[layananCount++], "Paket Premium");
                    } else {
                        printf("Layanan 'Paket Premium' sudah dipilih sebelumnya.\n");
                    }
                } else {
                    printf("Pilihan paket tidak valid.\n");
                }
            }
        } else if (pilihanJenisLayanan == 2) {
            // Menampilkan dan memilih layanan mandiri dengan batas maksimal 5 layanan
            printf("Layanan Mandiri:\n");
            printf("1. Cek Tekanan Darah - Rp100,000\n");
            printf("2. Tes Kolesterol - Rp150,000\n");
            printf("3. Tes Gula Darah - Rp150,000\n");
            printf("4. Tes EKG - Rp300,000\n");
            printf("5. Tes Fungsi Ginjal - Rp250,000\n");
            printf("6. Tes Fungsi Hati - Rp250,000\n");
            printf("7. Tes Mata - Rp200,000\n");
            printf("8. Tes MRI - Rp700,000\n");
            printf("9. Tes CT Scan - Rp800,000\n");
            printf("10. Tes Jantung Lengkap - Rp500,000\n");
            printf("11. Tes Paru-Paru - Rp400,000\n");
            printf("12. Tes Kanker - Rp600,000\n");

            i = 0;
            do {
                printf("Masukkan nomor layanan yang ingin dipilih (0 untuk selesai): ");
                scanf("%d", &subPilihan);
                
                if (subPilihan == 0) break;  // Keluar dari perulangan jika selesai

                const char *namaLayanan = NULL;
                float harga = 0.0;
                
                // Switch untuk menentukan layanan berdasarkan pilihan
                switch (subPilihan) {
                    case 1:
                        namaLayanan = "Cek Tekanan Darah";
                        harga = 100000;
                        break;
                    case 2:
                        namaLayanan = "Tes Kolesterol";
                        harga = 150000;
                        break;
                    case 3:
                        namaLayanan = "Tes Gula Darah";
                        harga = 150000;
                        break;
                    case 4:
                        namaLayanan = "Tes EKG";
                        harga = 300000;
                        break;
                    case 5:
                        namaLayanan = "Tes Fungsi Ginjal";
                        harga = 250000;
                        break;
                    case 6:
                        namaLayanan = "Tes Fungsi Hati";
                        harga = 250000;
                        break;
                    case 7:
                        namaLayanan = "Tes Mata";
                        harga = 200000;
                        break;
                    case 8:
                        namaLayanan = "Tes MRI";
                        harga = 700000;
                        break;
                    case 9:
                        namaLayanan = "Tes CT Scan";
                        harga = 800000;
                        break;
                    case 10:
                        namaLayanan = "Tes Jantung Lengkap";
                        harga = 500000;
                        break;
                    case 11:
                        namaLayanan = "Tes Paru-Paru";
                        harga = 400000;
                        break;
                    case 12:
                        namaLayanan = "Tes Kanker";
                        harga = 600000;
                        break;
                    default:
                        printf("Layanan tidak valid.\n");
                        continue;  // Kembali ke awal perulangan jika pilihan tidak valid
                }

                if (namaLayanan && !layananSudahDipilih(layananDipilih, layananCount, namaLayanan)) {
                    printf("Anda memilih: %s\n", namaLayanan);
                    totalHarga += harga;
                    strcpy(layananDipilih[layananCount++], namaLayanan);
                } else {
                    printf("Layanan '%s' sudah dipilih sebelumnya.\n", namaLayanan);
                }

            } while (subPilihan != 0 && i < 5);  // Maksimal 5 layanan
        } else {
            printf("Pilihan tidak valid.\n");
        }
    } while (pilihanJenisLayanan != 1 && pilihanJenisLayanan != 2);
    
    // Menampilkan informasi pasien, layanan yang dipilih, dan total biaya
    printf("\n====================================\n");
    printf("   Rangkuman Data Pasien dan Biaya\n");
    printf("====================================\n");
    printf("Tanggal: %s\n", tanggal);
    printf("Nama: %s\n", pasien.nama);
    printf("Umur: %d\n", pasien.umur);
    printf("Jenis Kelamin: %s\n", pasien.jenisKelamin);
    printf("Alamat: %s\n", pasien.alamat);
    printf("Layanan yang Dipilih:\n");
    for (i = 0; i < layananCount; i++) {
        printf("- %s\n", layananDipilih[i]);
    }
    printf("Total Harga: Rp%.2f\n", totalHarga);
    
    return 0;
}
