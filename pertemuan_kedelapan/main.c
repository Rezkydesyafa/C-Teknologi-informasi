#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char nama[50], jenisKelamin[10], alamat[50], tanggal[50], lanjut;
    int umur, pilihanJenisLayanan, pilihanPaket, subPilihan, layananCount = 0;
    float totalHarga = 0.0;
    char layananDipilih[5][50]; // array

    // untuk memanggil waktu saat ini
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    strftime(tanggal, sizeof(tanggal), "%d-%m-%Y/%H:%M:%S", local);

    FILE *file;
    file = fopen("data_pasien.csv", "a+"); // Gunakan mode append
    if (file == NULL)
    {
        printf("Error membuka file!\n");
        return 1;
    }

    // Menulis header file CSV jika file baru

    fprintf(file, "Nama Pasien,Umur,Alamat,Biaya Pemeriksaan,Jumlah Layanan,Total Biaya\n");

    do
    {
        printf("\n      Medical Check-Up RS UNISA   \n");
        printf("====================================\n");
        printf("  Tanggal : %s   \n", tanggal);
        printf("       Masukan data Pasien \n");
        printf("------------------------------------\n");

        printf("Nama Pasien        : ");
        scanf("%s", nama);
        printf("Umur Pasien        : ");
        scanf("%d", &umur);
        printf("Jenis Kelamin (L/P): ");
        scanf("%s", jenisKelamin);
        printf("Alamat             : ");
        scanf("%s", alamat);

        printf("====================================\n");
        printf("           Layanan Kami             \n");
        printf("====================================\n");
        printf("Pilih jenis layanan:\n");
        printf("1. Paket Medical Check-Up\n");
        printf("2. Pilih Layanan Mandiri\n");
        printf("====================================\n");
        printf("Masukkan pilihan Anda (1-2): ");
        scanf("%d", &pilihanJenisLayanan);

        if (pilihanJenisLayanan == 1)
        {
            printf("Paket Medical Check-Up:\n");
            printf("1. Paket Basic (Rp500,000):\n");
            printf("   - Cek Tekanan Darah, Tes Kolesterol, Tes Gula Darah\n\n");
            printf("2. Paket Comprehensive (Rp1,000,000):\n");
            printf("   - Tes EKG, Tes Fungsi Ginjal, Tes Fungsi Hati, Tes Mata\n\n");
            printf("3. Paket Premium (Rp2,000,000):\n");
            printf("   - Tes MRI, Tes CT Scan, Tes Jantung Lengkap, Tes Paru-Paru, Tes Kanker\n");

            printf("Masukkan pilihan paket (1-3): ");
            scanf("%d", &pilihanPaket);
            if (pilihanPaket == 1)
            {
                strcpy(layananDipilih[layananCount++], "Paket Basic");
                totalHarga += 500000;
            }
            else if (pilihanPaket == 2)
            {
                strcpy(layananDipilih[layananCount++], "Paket Comprehensive");
                totalHarga += 1000000;
            }
            else if (pilihanPaket == 3)
            {
                strcpy(layananDipilih[layananCount++], "Paket Premium");
                totalHarga += 2000000;
            }
            else
            {
                printf("Pilihan paket tidak valid.\n");
            }
        }
        else if (pilihanJenisLayanan == 2)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Masukkan nomor layanan yang ingin dipilih (0 untuk selesai): ");
                scanf("%d", &subPilihan);
                if (subPilihan == 0)
                    break;

                switch (subPilihan)
                {
                case 1:
                    strcpy(layananDipilih[layananCount++], "Cek Tekanan Darah");
                    totalHarga += 100000;
                    break;
                case 2:
                    strcpy(layananDipilih[layananCount++], "Tes Kolesterol");
                    totalHarga += 150000;
                    break;
                // Layanan lainnya...
                default:
                    printf("Layanan tidak valid.\n");
                }
            }
        }
        else
        {
            printf("Pilihan tidak valid.\n");
        }

        printf("\n------------------------------------\n");
        printf("Rincian Data Pasien dan Biaya:\n");
        printf("------------------------------------\n");
        printf("Nama          : %s\n", nama);
        printf("Umur          : %d tahun\n", umur);
        printf("Alamat        : %s\n", alamat);
        printf("Total Biaya   : Rp%.2f\n", totalHarga);
        printf("------------------------------------\n");

        // Menulis data ke file
        fprintf(file, "%s,%d,%s,%.2f,%d,%.2f\n", nama, umur, alamat, totalHarga, layananCount, totalHarga);

        printf("\nApakah ada pasien lain? (y/n): ");
        scanf(" %c", &lanjut);
    } while (lanjut == 'y' || lanjut == 'Y');

    fclose(file);
    printf("Data berhasil disimpan di rekam_medis.csv!\n");
    return 0;
}
