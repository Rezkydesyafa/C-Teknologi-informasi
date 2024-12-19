#include <stdio.h>
#include <string.h>

int main()
{
    char nama[50], jenisKelamin[10], Alamat[20], lanjut;
    int umur, pilihan, jumlahPasien = 0;
    float totalBiaya = 0, biaya = 0;
    ;

    FILE *file;
    file = fopen("pasien.csv", "w");
    if (file == NULL)
    {
        printf("Error membuka file!\n");
        return 1;
    }

    // Menulis header file CSV
    fprintf(file, "Nama Pasien,Umur, alamat ,Biaya Pemeriksaan, Jumlah pasien, Total Biaya\n");

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
    printf("Alamat : ");
    scanf(" %[^\n]s", Alamat);

    do
    {
        printf("\nPilih Paket Medical Check Up:\n");
        printf("1. Layanan Basic (Rp. 800.000)\n");
        printf("   Cek Tekanan Darah\n");
        printf("   Cek Gula Darah\n");
        printf("   Cek Kolesterol\n");

        printf("2. Layanan Extra (Rp. 1.600.000)\n");
        printf("   Semua pemeriksaan Basic\n");
        printf("   Rontgen Dada\n");
        printf("   EKG Jantung\n");

        printf("Pilihan Anda (1-3): ");
        scanf("%d", &pilihan);

        // Nested if untuk menghitung biaya
        if (pilihan >= 1 && pilihan <= 3)
        {
            if (pilihan == 1)
            {
                biaya = 800000;
            }
            else if (pilihan == 2)
            {
                biaya = 1600000;
            }
            else
            {
                biaya = 2500000;
            }

            // Diskon berdasarkan umur
            if (umur > 60)
            {
                printf("\nAnda mendapat diskon 20%% untuk lansia\n");
                biaya = biaya * 0.8;
            }
            else if (umur < 12)
            {
                printf("\nAnda mendapat diskon 15%% untuk anak-anak\n");
                biaya = biaya * 0.85;
            }

            totalBiaya += biaya;
            printf("\nBiaya Medical Check Up: Rp. %.2f\n", biaya);
            break;
        }
        else
        {
            printf("Pilihan tidak valid! Silakan pilih 1-3\n");
        }
    } while (1);

    jumlahPasien++;p
    printf("\n----------------------------------\n");
    printf("           Rincian Data Pasien          \n");
    printf("------------------------------------\n");
    printf(" Nama pasien : %s\n", nama);
    printf(" Nama umur : %d tahun\n", umur);
    printf(" Alamat  : Kp. %s \n", Alamat);
    printf(" Biaya  : %.2f \n", biaya);
    printf("\n----------------------------------\n");

    fprintf(file, "%s,%d,%s,%.2f,%d, %.2f, %.2f \n", nama, umur, Alamat, biaya, jumlahPasien);

    return 0;
}