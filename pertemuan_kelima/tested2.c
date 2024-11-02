#include <stdio.h>
#include <string.h>

// Struct untuk menyimpan data pasien
struct Pasien {
    char nama[50];
    int umur;
    char jenisKelamin[10];
    char alamat[100];
};

// Fungsi untuk input data diri pasien
void inputDataPasien(struct Pasien *pasien) {
    printf("====================================\n");
    printf("       Data Diri Pasien\n");
    printf("====================================\n");
    printf("Nama Pasien: ");
    getchar();  // Membersihkan input buffer
    fgets(pasien->nama, sizeof(pasien->nama), stdin);
    pasien->nama[strcspn(pasien->nama, "\n")] = '\0';  // Menghilangkan newline

    printf("Umur Pasien: ");
    scanf("%d", &pasien->umur);
    
    printf("Jenis Kelamin (L/P): ");
    scanf("%s", pasien->jenisKelamin);
    
    printf("Alamat: ");
    getchar();
    fgets(pasien->alamat, sizeof(pasien->alamat), stdin);
    pasien->alamat[strcspn(pasien->alamat, "\n")] = '\0';
}

// Fungsi untuk menampilkan informasi paket dan harga
void tampilkanPaket(int pilihanPaket) {
    switch (pilihanPaket) {
        case 1:
            printf("Layanan Paket Basic (Rp500,000):\n");
            printf("  1. Cek Tekanan Darah - Rp100,000\n");
            printf("  2. Tes Kolesterol - Rp150,000\n");
            printf("  3. Tes Gula Darah - Rp150,000\n");
            break;
        case 2:
            printf("Layanan Paket Comprehensive (Rp1,000,000):\n");
            printf("  1. Tes EKG - Rp300,000\n");
            printf("  2. Tes Fungsi Ginjal - Rp250,000\n");
            printf("  3. Tes Fungsi Hati - Rp250,000\n");
            printf("  4. Tes Mata - Rp200,000\n");
            break;
        case 3:
            printf("Layanan Paket Premium (Rp2,000,000):\n");
            printf("  1. Tes MRI - Rp700,000\n");
            printf("  2. Tes CT Scan - Rp800,000\n");
            printf("  3. Tes Jantung Lengkap - Rp500,000\n");
            printf("  4. Tes Paru-Paru - Rp400,000\n");
            printf("  5. Tes Kanker - Rp600,000\n");
            break;
        default:
            printf("Paket tidak valid.\n");
    }
}

int main() {
    struct Pasien pasien;
    int pilihanPaket, subPilihan;
    char lanjut, lanjutLayanan;
    float totalHarga = 0.0;
    
    // Input data pasien
    inputDataPasien(&pasien);
    
    // Menampilkan paket
   
    printf("Silakan pilih paket Medical Check-Up:\n");
    printf("1. Paket Basic\n");
    printf("2. Paket Comprehensive\n");
    printf("3. Paket Premium\n");
    printf("====================================\n");
    
    // Memilih paket utama
    do {
        printf("Masukkan pilihan paket (1-3): ");
        scanf("%d", &pilihanPaket);
        
        // Percabangan berdasarkan paket yang dipilih
        if (pilihanPaket >= 1 && pilihanPaket <= 3) {
            // Tambahkan harga paket ke total harga
            if (pilihanPaket == 1) totalHarga += 500000;
            else if (pilihanPaket == 2) totalHarga += 1000000;
            else if (pilihanPaket == 3) totalHarga += 2000000;
            
            tampilkanPaket(pilihanPaket);
            
            do {
                // Memilih layanan dalam paket
                printf("Masukkan nomor layanan yang ingin dipilih: ");
                scanf("%d", &subPilihan);
                
                switch (pilihanPaket) {
                    case 1:
                        if (subPilihan == 1) {
                            printf("Anda memilih: Cek Tekanan Darah\n");
                            totalHarga += 100000;
                        } else if (subPilihan == 2) {
                            printf("Anda memilih: Tes Kolesterol\n");
                            totalHarga += 150000;
                        } else if (subPilihan == 3) {
                            printf("Anda memilih: Tes Gula Darah\n");
                            totalHarga += 150000;
                        } else {
                            printf("Layanan tidak valid untuk Paket Basic.\n");
                        }
                        break;
                        
                    case 2:
                        if (subPilihan == 1) {
                            printf("Anda memilih: Tes EKG\n");
                            totalHarga += 300000;
                        } else if (subPilihan == 2) {
                            printf("Anda memilih: Tes Fungsi Ginjal\n");
                            totalHarga += 250000;
                        } else if (subPilihan == 3) {
                            printf("Anda memilih: Tes Fungsi Hati\n");
                            totalHarga += 250000;
                        } else if (subPilihan == 4) {
                            printf("Anda memilih: Tes Mata\n");
                            totalHarga += 200000;
                        } else {
                            printf("Layanan tidak valid untuk Paket Comprehensive.\n");
                        }
                        break;
                        
                    case 3:
                        if (subPilihan == 1) {
                            printf("Anda memilih: Tes MRI\n");
                            totalHarga += 700000;
                        } else if (subPilihan == 2) {
                            printf("Anda memilih: Tes CT Scan\n");
                            totalHarga += 800000;
                        } else if (subPilihan == 3) {
                            printf("Anda memilih: Tes Jantung Lengkap\n");
                            totalHarga += 500000;
                        } else if (subPilihan == 4) {
                            printf("Anda memilih: Tes Paru-Paru\n");
                            totalHarga += 400000;
                        } else if (subPilihan == 5) {
                            printf("Anda memilih: Tes Kanker\n");
                            totalHarga += 600000;
                        } else {
                            printf("Layanan tidak valid untuk Paket Premium.\n");
                        }
                        break;
                }
                
                printf("Apakah Anda ingin memilih layanan lain dalam paket ini? (y/n): ");
                scanf(" %c", &lanjutLayanan);
            } while (lanjutLayanan == 'y' || lanjutLayanan == 'Y');
        } else {
            printf("Pilihan paket tidak valid. Silakan pilih lagi.\n");
        }
        
        printf("\nApakah Anda ingin memilih paket lain? (y/n): ");
        scanf(" %c", &lanjut);
    } while (lanjut == 'y' || lanjut == 'Y');
    
    // Menampilkan informasi pasien dan total biaya
    printf("\n====================================\n");
    printf("   Rangkuman Data Pasien dan Biaya\n");
    printf("====================================\n");
    printf("Nama: %s\n", pasien.nama);
    printf("Umur: %d\n", pasien.umur);
    printf("Jenis Kelamin: %s\n", pasien.jenisKelamin);
    printf("Alamat: %s\n", pasien.alamat);
    printf("Total Biaya: Rp%.2f\n", totalHarga);
    printf("====================================\n");
    
    printf("Terima kasih telah menggunakan layanan Medical Check-Up RS UNISA!\n");

    return 0;
}
