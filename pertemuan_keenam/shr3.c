#include <stdio.h>
#include <string.h>

int main()
{
    char namaAntrian[5][50];
    int umurAntrian[5];
    int depan = -1, belakang = -1;

    int pilihan;
    while (1)
    {
        printf("=============================================\n");
        printf(" Pendaftaran Loket Pasien Rumah Sakit UNISA\n");
        printf("=============================================\n");
        printf("1. Daftarkan Pasien\n");
        printf("2. Layan Pasien\n");
        printf("3. Keluar\n");
        printf("=============================================\n");


        if (depan == -1)
        {
            printf("Antrian loket sedang kosong \n");
        }
        else
        {
            printf("Antrian Pasien:\n");
            for (int i = depan; i <= belakang; i++)
            {
                printf("%d. nama : %s \n", i + 1, namaAntrian[i]);
                printf("   Umur : %d \n", umurAntrian[i]);
            }
        }

        printf("=============================================\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            if (belakang == 5 - 1)
            {
                printf("Antrian sudah penuh!\n");
            }
            else
            {
                belakang++;
                if (depan == -1)
                {
                    depan = 0; // Menandakan antrian sudah ada isinya
                }

                // Input data pasien
                printf("Masukkan nama pasien: ");
                scanf(" %[^\n]", namaAntrian[belakang]); // Input nama pasien

                printf("Masukkan umur pasien: ");
                scanf("%d", &umurAntrian[belakang]);

                printf("Pasien %s telah berhasil didaftarkan.\n", namaAntrian[belakang]);
            }
            break;

        case 2:
            if (depan == -1)
            {
                printf("Antrian kosong, tidak ada pasien untuk dilayani.\n");
            }
            else
            {
                // Layan pasien yang ada di depan antrian
                printf("Pasien yang dilayani: %s, Umur: %d\n", namaAntrian[depan], umurAntrian[depan]);

                // Menggeser antrian
                if (depan == belakang)
                {
                    depan = belakang = -1; // Jika antrian kosong setelah pelayanan
                }
                else
                {
                    depan++;
                }
            }
            break;

        case 3:
            printf("Keluar dari program.\n");
            return 0;

        default:
            printf("Pilihan tidak valid!\n");
        }
    }

    return 0;
}
