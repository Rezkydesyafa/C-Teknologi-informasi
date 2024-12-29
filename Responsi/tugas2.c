#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char id[100][20], nama[100][50], dokter[100][50], riwayat[100][100],
    penyakit[100][50], obat[100][50], metode_pembayaran[100][20], member[100][10];
int umur[100], jumlahPasien = 0, pilihan;
float biaya[100];

// Fungsi untuk menambah data pasien
void tambahData(int *jumlahPasien)
{
    // Generate ID Pasien secara otomatis
    sprintf(id[*jumlahPasien], "P%03d", *jumlahPasien + 1);

    printf("Masukkan Nama Pasien: ");
    scanf(" %[^\n]", nama[*jumlahPasien]);
    printf("Masukkan Umur Pasien: ");
    scanf("%d", &umur[*jumlahPasien]);
    printf("Masukkan Dokter Penanggung Jawab: ");
    scanf(" %[^\n]", dokter[*jumlahPasien]);
    printf("Masukkan Riwayat Perawatan: ");
    scanf(" %[^\n]", riwayat[*jumlahPasien]);
    printf("Masukkan Penyakit (jika ada, jika tidak, ketik -): ");
    scanf(" %[^\n]", penyakit[*jumlahPasien]);
    printf("Masukkan Obat yang Diberikan: ");
    scanf(" %[^\n]", obat[*jumlahPasien]);

    printf("Apakah Anda sudah memiliki member (Ya/Tidak)? ");
    scanf(" %[^\n]", member[*jumlahPasien]);

    (*jumlahPasien)++;
    printf("Data pasien berhasil ditambahkan!\n");
}

// Fungsi untuk menampilkan data pasien secara rekursif
void tampilkanDataRekursif(int index, int jumlahPasien)
{
    // jika index sama dengan jumlah pasien, hentikan rekursi
    if (index >= jumlahPasien)
    {
        return;
    }

    // Menampilkan data pasien
    printf("ID                : %s\n", id[index]);
    printf("Nama              : %s\n", nama[index]);
    printf("Umur              : %d\n", umur[index]);
    printf("Dokter            : %s\n", dokter[index]);
    printf("Riwayat           : %s\n", riwayat[index]);
    printf("Penyakit          : %s\n", penyakit[index]);
    printf("Obat              : %s\n", obat[index]);
    printf("Metode Pembayaran : %s\n", metode_pembayaran[index]);
    printf("Biaya             : %.2f\n", biaya[index]);
    printf("member            : %s\n", member[index]);
    printf("-----------------------------\n");
    // Memanggil fungsi ini lagi untuk menampilkan data pasien berikutnya
    tampilkanDataRekursif(index + 1, jumlahPasien);
}

// Fungsi untuk memanggil fungsi rekursif
void tampilkanData(int jumlahPasien)
{
    printf("-----------------------------\n");
    printf("         Data Pasien         \n");
    printf("-----------------------------\n");
    tampilkanDataRekursif(0, jumlahPasien);

    printf("-----------------------------\n");
}

// Fungsi untuk pembayaran
void pembayaran(int jumlahPasien)
{
    char targetId[20];
    printf("Masukkan ID Pasien untuk pembayaran: ");
    scanf("%s", targetId);

    for (int i = 0; i < jumlahPasien; i++)
    {
        if (strcmp(id[i], targetId) == 0)
        {
            printf("Pilih metode pembayaran (QRIS/Bank/Cash): ");
            scanf("%s", metode_pembayaran[i]);
            printf("Masukkan jumlah biaya: ");
            scanf("%f", &biaya[i]);

            // Cek apakah pasien adalah member
            if (strcmp(member[i], "Ya") == 0)
            {
                float diskon = biaya[i] * 0.20;
                printf("Kamu adalah Member DAn mendapatkan diskon 20%. Biaya setelah diskon: %.2f\n", biaya[i]);
            }
            else
            {
                printf("Anda tidak memiliki member, tidak ada fasilitas khusus yang tersedia.\n");
            }

            printf("Pembayaran berhasil dilakukan untuk ID %s dengan metode %s sejumlah %.2f\n",
                   id[i], metode_pembayaran[i], biaya[i]);
            return;
        }
    }
    printf("Data pasien dengan ID %s tidak ditemukan.\n", targetId);
}

// Fungsi untuk menghapus data pasien
void hapusData(int *jumlahPasien)
{
    char targetId[20];
    printf("Masukkan ID Pasien yang akan dihapus: ");
    scanf("%s", targetId);

    for (int i = 0; i < *jumlahPasien; i++)
    {
        if (strcmp(id[i], targetId) == 0)
        {
            for (int j = i; j < *jumlahPasien - 1; j++)
            {
                strcpy(id[j], id[j + 1]);
                strcpy(nama[j], nama[j + 1]);
                umur[j] = umur[j + 1];
                strcpy(dokter[j], dokter[j + 1]);
                strcpy(riwayat[j], riwayat[j + 1]);
                strcpy(penyakit[j], penyakit[j + 1]);
                strcpy(obat[j], obat[j + 1]);
                biaya[j] = biaya[j + 1];
                strcpy(metode_pembayaran[j], metode_pembayaran[j + 1]);
            }
            (*jumlahPasien)--;
            printf("Data pasien dengan ID %s berhasil dihapus.\n", targetId);
            return;
        }
    }
    printf("Data pasien dengan ID %s tidak ditemukan.\n", targetId);
}

// Fungsi untuk memperbarui data pasien
void updateData(int jumlahPasien)
{
    char targetId[20];
    printf("Masukkan ID Pasien yang akan diperbarui: ");
    scanf("%s", targetId);

    for (int i = 0; i < jumlahPasien; i++)
    {
        if (strcmp(id[i], targetId) == 0)
        {
            printf("Masukkan Nama Baru: ");
            scanf(" %[^\n]", nama[i]);
            printf("Masukkan Umur Baru: ");
            scanf("%d", &umur[i]);
            printf("Masukkan Dokter Baru: ");
            scanf(" %[^\n]", dokter[i]);
            printf("Masukkan Riwayat Perawatan Baru: ");
            scanf(" %[^\n]", riwayat[i]);
            printf("Masukkan Penyakit Baru (jika ada, jika tidak, ketik -): ");
            scanf(" %[^\n]", penyakit[i]);
            printf("Masukkan Obat Baru: ");
            scanf(" %[^\n]", obat[i]);
            printf("Apakah Anda ingin memperbarui status member (Ya/Tidak)? ");
            scanf(" %[^\n]", member[i]);
            printf("Data pasien berhasil diperbarui.\n");
            printf("Data pasien berhasil diperbarui.\n");
            return;
        }
    }
    printf("Data pasien dengan ID %s tidak ditemukan.\n", targetId);
}

// Fungsi untuk menyimpan data ke file CSV
void simpanKeFile(int jumlahPasien)
{
    FILE *file = fopen("Rekam_Medis_Pasien.CSV", "w");
    if (file == NULL)
    {
        printf("Gagal membuka file untuk menyimpan data.\n");
        return;
    }
    fprintf(file, "ID,Nama,Umur,Dokter,Riwayat,Penyakit,Obat,Metode Pembayaran,Biaya\n");
    for (int i = 0; i < jumlahPasien; i++)
    {
        fprintf(file, "%s,%s,%d,%s,%s,%s,%s,%s,%.2f\n", id[i], nama[i], umur[i], dokter[i],
                riwayat[i], penyakit[i], obat[i], metode_pembayaran[i], biaya[i], member[i]);
    }
    fclose(file);
    printf("Data berhasil disimpan ke file Rekam_Medis_Pasien.CSV\n");
}

int main()
{

    do
    {
        printf("========================================\n");
        printf("           DENTAL CARE UNISA           \n");
        printf("========================================\n");
        printf("1. Tambah Data Pasien\n");
        printf("2. Tampilkan Data Pasien\n");
        printf("3. Pembayaran\n");
        printf("4. Hapus Data Pasien\n");
        printf("5. Update Data Pasien\n");
        printf("6. Simpan Data ke File\n");
        printf("8. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            tambahData(&jumlahPasien);
            break;
        case 2:
            tampilkanData(jumlahPasien);
            break;
        case 3:
            pembayaran(jumlahPasien);
            break;
        case 4:
            hapusData(&jumlahPasien);
            break;
        case 5:
            updateData(jumlahPasien);
            break;
        case 6:
            simpanKeFile(jumlahPasien);
            break;
        case 7:
            printf("Terima kasih telah menggunakan sistem ini. Selamat tinggal!\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
            break;
        }
    } while (pilihan != 7);

    return 0;
}
