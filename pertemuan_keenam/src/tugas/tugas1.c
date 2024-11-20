#include <stdio.h>
#include <ctype.h>

// Fungsi untuk enkripsi dan dekripsi Caesar Cipher
void caesar_cipher(int pergeseran, int mode)
{
    int teks;

    printf("Masukkan teks yang ingin di ubah :\n");
    getchar();
    while ((teks = getchar()) != '\n')
    {
        if ((teks))
        {
            if (islower(teks))
            {
                teks = ((teks - 'a' + mode * pergeseran) % 26 + 26) % 26 + 'a';
            }
            else if (isupper(teks))
            {
                teks = ((teks - 'A' + mode * pergeseran) % 26 + 26) % 26 + 'A';
            }
            else if (isdigit(teks))
            {
                teks = ((teks - '0' + mode * pergeseran) % 10 + 10) % 10 + '0';
            }
        }
        putchar(teks);
    }
    putchar('\n');
}

int main()
{
    int pergeseran, pilihan;

    printf("====================================\n");
    printf("      Welcome to Caesar Cipher      \n");
    printf("====================================\n");
    printf("Pilih mode:\n");
    printf("1. Enkripsi\n");
    printf("2. Dekripsi\n");
    printf("Masukkan pilihan : ");
    scanf("%d", &pilihan);

    if (pilihan != 1 && pilihan != 2)
    {
        printf("Pilihan tidak valid.\n");
        return 0;
    }
    printf("Masukkan besar pergeseran kunci: ");
    scanf("%d", &pergeseran);

    // Jika pilihan adalah dekripsi, pergeseran menjadi negatif
    int mode = (pilihan == 1) ? 1 : -1;

    caesar_cipher(pergeseran, mode);

    return 0;
}
