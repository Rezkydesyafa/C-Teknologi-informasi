#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nama[50][100];
int umur[50];
char status_member[50][100];
char dokter[50][100];
char riwayat_perawatan[50][100];
char penyakit[50][100];
char obat[50][100];
char metode_pembayaran[50][100];
int jumlah_pasien = 0;

void tambahPasien()
{
    if (jumlah_pasien >= 100)
    {
        printf("\nBatas maksimal pasien tercapai. Tidak dapat menambah pasien lagi.\n");
        return;
    }

    printf("\nMasukkan Nama Pasien: ");
    scanf(" %[^\n]", nama[jumlah_pasien]);

    printf("Masukkan Umur: ");
    scanf("%d", &umur[jumlah_pasien]);

    printf("Apakah pasien adalah member? (ya/tidak): ");
    scanf(" %[^\n]", status_member[jumlah_pasien]);

    printf("Masukkan Nama Dokter: ");
    scanf(" %[^\n]", dokter[jumlah_pasien]);

    printf("Masukkan Riwayat Perawatan: ");
    scanf(" %[^\n]", riwayat_perawatan[jumlah_pasien]);

    printf("Masukkan Penyakit (jika ada): ");
    scanf(" %[^\n]", penyakit[jumlah_pasien]);

    jumlah_pasien++;
    printf("\nPasien berhasil ditambahkan!\n");
}

void hapusPasien()
{
    char nama_dihapus[50];
    printf("\nMasukkan Nama Pasien yang Ingin Dihapus: ");
    scanf(" %[^\n]", nama_dihapus);

    for (int i = 0; i < jumlah_pasien; i++)
    {
        if (strcmp(nama[i], nama_dihapus) == 0)
        {
            for (int j = i; j < jumlah_pasien - 1; j++)
            {
                strcpy(nama[j], nama[j + 1]);
                umur[j] = umur[j + 1];
                strcpy(status_member[j], status_member[j + 1]);
                strcpy(dokter[j], dokter[j + 1]);
                strcpy(riwayat_perawatan[j], riwayat_perawatan[j + 1]);
                strcpy(penyakit[j], penyakit[j + 1]);
                strcpy(obat[j], obat[j + 1]);
                strcpy(metode_pembayaran[j], metode_pembayaran[j + 1]);
            }
            jumlah_pasien--;
            printf("\nPasien berhasil dihapus!\n");
            return;
        }
    }
    printf("\nPasien tidak ditemukan.\n");
}

void perbaruiPasien()
{
    char nama_diperbarui[50];
    printf("\nMasukkan Nama Pasien yang Ingin Diperbarui: ");
    scanf(" %[^\n]", nama_diperbarui);

    for (int i = 0; i < jumlah_pasien; i++)
    {
        if (strcmp(nama[i], nama_diperbarui) == 0)
        {
            printf("\nMasukkan Umur Baru: ");
            scanf("%d", &umur[i]);

            printf("Masukkan Nama Dokter Baru: ");
            scanf(" %[^\n]", dokter[i]);

            printf("Masukkan Riwayat Perawatan Baru: ");
            scanf(" %[^\n]", riwayat_perawatan[i]);

            printf("Masukkan Penyakit Baru (jika ada): ");
            scanf(" %[^\n]", penyakit[i]);

            printf("\nPasien berhasil diperbarui!\n");
            return;
        }
    }
    printf("\nPasien tidak ditemukan.\n");
}

void berikanObat()
{
    char nama_obat[50];
    printf("\nMasukkan Nama Pasien untuk Memberikan Obat: ");
    scanf(" %[^\n]", nama_obat);

    for (int i = 0; i < jumlah_pasien; i++)
    {
        if (strcmp(nama[i], nama_obat) == 0)
        {
            printf("\nMasukkan Obat: ");
            scanf(" %[^\n]", obat[i]);
            printf("\nObat berhasil diberikan!\n");
            return;
        }
    }
    printf("\nPasien tidak ditemukan.\n");
}

void prosesPembayaran()
{
    char nama_bayar[50];
    printf("\nMasukkan Nama Pasien untuk Pembayaran: ");
    scanf(" %[^\n]", nama_bayar);

    for (int i = 0; i < jumlah_pasien; i++)
    {
        if (strcmp(nama[i], nama_bayar) == 0)
        {
            printf("\nPilih Metode Pembayaran (QRIS/Bank/Tunai): ");
            scanf(" %[^\n]", metode_pembayaran[i]);
            printf("\nPembayaran berhasil diproses!\n");
            return;
        }
    }
    printf("\nPasien tidak ditemukan.\n");
}

void simpanKeFile()
{
    FILE *file = fopen("Rekam_Medis_Pasien.CSV", "w");
    if (file == NULL)
    {
        printf("\nTerjadi kesalahan saat menyimpan ke file.\n");
        return;
    }

    for (int i = 0; i < jumlah_pasien; i++)
    {
        fprintf(file, "%s,%d,%s,%s,%s,%s,%s,%s\n",
                nama[i], umur[i], status_member[i], dokter[i],
                riwayat_perawatan[i], penyakit[i], obat[i], metode_pembayaran[i]);
    }

    fclose(file);
    printf("\nData berhasil disimpan ke file!\n");
}

void muatDariFile()
{
    FILE *file = fopen("Rekam_Medis_Pasien.CSV", "r");
    if (file == NULL)
    {
        printf("\nTerjadi kesalahan saat memuat file atau file tidak ditemukan.\n");
        return;
    }

    jumlah_pasien = 0;
    while (fscanf(file, "%[^\n],%d,%[^\n],%[^\n],%[^\n],%[^\n],%[^\n],%[^\n] \n",
                  nama[jumlah_pasien], &umur[jumlah_pasien], status_member[jumlah_pasien],
                  dokter[jumlah_pasien], riwayat_perawatan[jumlah_pasien],
                  penyakit[jumlah_pasien], obat[jumlah_pasien],
                  metode_pembayaran[jumlah_pasien]) != EOF)
    {
        jumlah_pasien++;
    }

    fclose(file);
    printf("\nData berhasil dimuat dari file!\n");
}

void tampilkanPasien()
{
    printf("\nDaftar Pasien:\n");
    for (int i = 0; i < jumlah_pasien; i++)
    {
        printf("\nNama: %s\nUmur: %d\nMember: %s\nDokter: %s\nRiwayat Perawatan: %s\nPenyakit: %s\nObat: %s\nMetode Pembayaran: %s\n",
               nama[i], umur[i], status_member[i], dokter[i],
               riwayat_perawatan[i], penyakit[i], obat[i], metode_pembayaran[i]);
    }
}

int main()
{
    int pilihan;
    muatDariFile();

    do
    {
        printf("\nSistem Dental Care Unisa\n");
        printf("1. Tambah Pasien\n");
        printf("2. Hapus Pasien\n");
        printf("3. Perbarui Pasien\n");
        printf("4. Berikan Obat\n");
        printf("5. Proses Pembayaran\n");
        printf("6. Tampilkan Pasien\n");
        printf("7. Simpan dan Keluar\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            tambahPasien();
            break;
        case 2:
            hapusPasien();
            break;
        case 3:
            perbaruiPasien();
            break;
        case 4:
            berikanObat();
            break;
        case 5:
            prosesPembayaran();
            break;
        case 6:
            tampilkanPasien();
            break;
        case 7:
            simpanKeFile();
            printf("\nKeluar dari sistem. Sampai jumpa!\n");
            break;
        default:
            printf("\nPilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 7);

    return 0;
}
