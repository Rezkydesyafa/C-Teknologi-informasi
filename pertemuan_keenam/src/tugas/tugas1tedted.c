#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define KAPASITAS_ANTRIAN 5  // Kapasitas maksimum antrian

// Array untuk menyimpan data pasien
char *nama_pasien[KAPASITAS_ANTRIAN];
int umur_pasien[KAPASITAS_ANTRIAN];
char *keluhan_pasien[KAPASITAS_ANTRIAN];
time_t waktu_kedatangan[KAPASITAS_ANTRIAN];

// Variabel untuk antrian
int posisi_depan = 0;
int posisi_belakang = -1;
int jumlah_pasien = 0;

// Fungsi untuk mengecek apakah antrian penuh
int antrian_penuh() {
    return jumlah_pasien == KAPASITAS_ANTRIAN;
}

// Fungsi untuk mengecek apakah antrian kosong
int antrian_kosong() {
    return jumlah_pasien == 0;
}

// Fungsi untuk menambahkan pasien ke dalam antrian
void tambahkan_pasien(char *nama, int umur, char *keluhan) {
    if (antrian_penuh()) {
        printf("Antrian penuh! Tidak dapat menambahkan pasien baru.\n");
        return;
    }

    posisi_belakang = (posisi_belakang + 1) % KAPASITAS_ANTRIAN;
    nama_pasien[posisi_belakang] = malloc(strlen(nama) + 1);
    strcpy(nama_pasien[posisi_belakang], nama);

    keluhan_pasien[posisi_belakang] = malloc(strlen(keluhan) + 1);
    strcpy(keluhan_pasien[posisi_belakang], keluhan);

    umur_pasien[posisi_belakang] = umur;
    waktu_kedatangan[posisi_belakang] = time(NULL);
    jumlah_pasien++;

    printf("Pasien %s telah ditambahkan ke antrian.\n", nama);
}

// Fungsi untuk melayani pasien dan menghapusnya dari antrian
void layani_pasien() {
    if (antrian_kosong()) {
        printf("Antrian kosong! Tidak ada pasien yang dapat dilayani.\n");
        return;
    }

    printf("Pasien %s telah dilayani dan dikeluarkan dari antrian.\n", nama_pasien[posisi_depan]);
    free(nama_pasien[posisi_depan]);
    free(keluhan_pasien[posisi_depan]);

    posisi_depan = (posisi_depan + 1) % KAPASITAS_ANTRIAN;
    jumlah_pasien--;
}

// Fungsi untuk menampilkan daftar pasien dalam antrian
void tampilkan_antrian() {
    if (antrian_kosong()) {
        printf("Antrian kosong!\n");
        return;
    }

    printf("Daftar pasien yang sedang mengantri:\n");
    for (int i = 0; i < jumlah_pasien; i++) {
        int indeks = (posisi_depan + i) % KAPASITAS_ANTRIAN;
        printf("%d. Nama: %s\n", i + 1, nama_pasien[indeks]);
        printf("   Umur: %d\n", umur_pasien[indeks]);
        printf("   Keluhan: %s\n", keluhan_pasien[indeks]);
        printf("   Waktu Kedatangan: %s", ctime(&waktu_kedatangan[indeks]));
    }
}

int main() {
    int pilihan;
    char nama[50];
    int umur;
    char keluhan[100];

    do {
        printf("\n--- Sistem Antrian Pendaftaran Pasien ---\n");
        printf("1. Tambah pasien ke antrian\n");
        printf("2. Layani pasien dari antrian\n");
        printf("3. Tampilkan daftar pasien dalam antrian\n");
        printf("4. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);
        getchar();  // Membuang newline setelah input angka

        if (pilihan == 1) {
            printf("Masukkan nama pasien: ");
            fgets(nama, sizeof(nama), stdin);
            nama[strcspn(nama, "\n")] = '\0';

            printf("Masukkan umur pasien: ");
            scanf("%d", &umur);
            getchar();

            printf("Masukkan keluhan pasien: ");
            fgets(keluhan, sizeof(keluhan), stdin);
            keluhan[strcspn(keluhan, "\n")] = '\0';

            tambahkan_pasien(nama, umur, keluhan);

        } else if (pilihan == 2) {
            layani_pasien();

        } else if (pilihan == 3) {
            tampilkan_antrian();

        } else if (pilihan == 4) {
            printf("Keluar dari sistem antrian.\n");

        } else {
            printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }

    } while (pilihan != 4);

    // Bebaskan memori untuk semua pasien yang masih dalam antrian
    while (!antrian_kosong()) {
        layani_pasien();
    }

    return 0;
}
