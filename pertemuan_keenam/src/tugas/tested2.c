#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// Array untuk menyimpan data pasien dan nomor antrian
char nama_pasien[5][50], keluhan_pasien[5][50], no_antrian[5][10];
int umur_pasien[5], posisi_depan = 0, posisi_belakang = -1, jumlah_pasien = 0;
time_t waktu_kedatangan[5];


void tambahkan_pasien(char *nama, int umur, char *keluhan) {
    if (jumlah_pasien == 5) {
        printf("Antrian penuh! Tidak dapat menambahkan pasien baru.\n");
        return; 
    }

    posisi_belakang = (posisi_belakang + 1);
    strncpy(nama_pasien[posisi_belakang], nama, 50);
    strncpy(keluhan_pasien[posisi_belakang], keluhan, 50);
    umur_pasien[posisi_belakang] = umur;
    waktu_kedatangan[posisi_belakang] = time(NULL);
    
    // Membuat nomor antrian
    snprintf(no_antrian[posisi_belakang], 10, "ANTRI-%d", jumlah_pasien + 1);

    jumlah_pasien++;

    printf("Pasien %s nomor antrian %s telah ditambahkan ke antrian.\n", nama, no_antrian[posisi_belakang]);
}

// Fungsi untuk melayani pasien dari antrian
void layani_pasien() {
    if (jumlah_pasien == 0) {
        printf("Antrian kosong! Tidak ada pasien yang dapat dilayani.\n");
        return;
    }

    printf("Pasien %s nomor antrian %s telah dilayani dan dikeluarkan dari antrian.\n", nama_pasien[posisi_depan], no_antrian[posisi_depan]);
    posisi_depan = (posisi_depan + 1);
    jumlah_pasien--;
}

// Fungsi untuk menampilkan daftar pasien dalam antrian
void tampilkan_antrian() {
    if (jumlah_pasien == 0) {
        printf("Antrian kosong! Tidak ada pasien.\n");
        return;
    }

    printf("Daftar pasien yang sedang mengantri:\n");
    for (int i = 0; i < jumlah_pasien; i++) {
        int indeks = (posisi_depan + i);
        printf("-----------------------------------------\n");
        printf("%d. Nama          : %s\n", i + 1, nama_pasien[indeks]);
        printf("   Nomor Antrian : %s\n", no_antrian[indeks]);
        printf("   Umur          : %d tahun\n", umur_pasien[indeks]);
        printf("   Keluhan       : %s\n", keluhan_pasien[indeks]);
        printf("   Waktu         : %s", ctime(&waktu_kedatangan[indeks]));
        printf("-----------------------------------------\n");
    }
}

int main() {
    int pilihan;
    char nama[50];
    int umur;
    char keluhan[50];
    do {
        printf("========================================\n");
        printf("            DAFTAR PASIEN            \n");
        printf("========================================\n");
        tampilkan_antrian();
        
        printf("========================================\n");
        printf("      Loket Pasien Rumah sakit Unisa   \n");
        printf("========================================\n");
        printf("1. Tambah pasien ke antrian\n");
        printf("2. Layani pasien dari antrian\n");
        printf("3. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &pilihan);
        printf("\n========================================\n");

        switch (pilihan) {
            case 1:
                printf("Masukkan nama pasien: ");
                scanf(" %[^\n]", nama);
                printf("Masukkan umur pasien: ");
                scanf("%d", &umur);
                printf("Masukkan keluhan pasien: ");
                scanf(" %[^\n]", keluhan);
                tambahkan_pasien(nama, umur, keluhan);
                break;
            case 2:
                layani_pasien();
                break;
            case 3:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 3 );

    return 0;
}