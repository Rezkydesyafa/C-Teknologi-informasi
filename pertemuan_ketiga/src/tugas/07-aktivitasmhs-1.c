#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char nama [25], prodi[25], fakultas [50], fakultas_2 [50];
    char nothing [] = {"Fakultas yang di inputkan tidak ada!"};
    int nim, sks;

    printf("\n----Program Pembayaran SPP Variabel----");
    printf("\n---------------------------------------");
    printf("\nInput Nama : ");
    scanf("%[^\n]s", &nama);
    printf("\nInput Nim : ");
    scanf("%i", &nim);
    printf("\nInput Fakultas (Kesehatan/Bishum/Saintek) : ");
    gets(fakultas);
    scanf("%[^\n]s", &fakultas);

    if (strcmp(fakultas, "kesehatan")== 0)
    {
        printf("\n---Daftar Program Studi---");
        printf("\nAdministrasi Publik");
        printf("\nKebidanan");
        printf("\nKeperawatan");
        printf("\nFisioterapi");
        printf("\nRadiologi");
        printf("\nGizi");
        printf("\n----------------------------");
        printf("\nInput Prodi : ");
        scanf("\n%[^\n]s", &prodi); //%[^\n] kode untuk spasi pada inputan
    }
    else if (strcmp(fakultas, "bishum") == 0)
    {
        printf("\n---Daftar Program Studi---");
        printf("\nAdministrasi Publik");
        printf("\nPsikologi");
        printf("\nAkuntansi");
        printf("\nManajemen");
        printf("\nIlmu Komunikasi");
        printf("\n----------------------------");
        printf("\nInput Prodi : ");
        scanf("\n%[^\n]s", &prodi); //%[^\n] kode untuk spasi pada inputan
    }
    else if (strcmp(fakultas, "saintek") == 0)
    {
        printf("\n---Daftar Program Studi---");
        printf("\nBioteknologi");
        printf("\nArsitektur");
        printf("\nTeknologi Informasi");
        printf("\n----------------------------");
        printf("\nInput Prodi : ");
        scanf("\n%[^\n]s", &prodi); //%[^\n] kode untuk spasi pada inputan
    }
    else
    {
        printf("\n%s\n",&nothing[0]);
    }

    printf("\nInput banyak SKS yang diambil : ");
    scanf("\n%i", &sks);
    
    switch (sks) 
    {
        case 24:
            sks*=150000;
            printf("\nPembayaran SPP Variabel anda adalah = Rp.%i\n", sks);
            printf("\n");
            break;
        case 23:
            sks*=150000;
            printf("\nPembayaran SPP Variabel anda adalah = Rp.%i\n", sks);
            break;
        case 22:
            sks*=150000; 
            printf("\nPembayaran SPP Variabel anda adalah = Rp.%i\n", sks);
            break;
        case 21:
            sks*=150000;
            printf("\nPembayaran SPP Variabel anda adalah = Rp.%i\n", sks);
            break;
        case 20:
            sks*=150000;
            printf("\nPembayaran SPP Variabel anda adalah = Rp.%i\n", sks);
            break;
        case 19:
            sks*=150000;
            printf("\nPembayaran SPP Variabel anda adalah = Rp.%i\n", sks);
            break;
        case 18:
            sks*=150000;
            printf("\nPembayaran SPP Variabel anda adalah = Rp.%i\n", sks);
            break;
        default:
            printf("\nJumlah SKS anda tidak mencukupi silahkan hubungi bagian prodi\n");
    }

}

