#include <stdio.h>
#include <ctype.h>

int main()
{
    int huruf_kecil = 0, huruf_bersar = 0, angka = 0;
    char text;

    printf("Masukkan teks : ");


    while ((text = getchar()) != '\n')
    {
        if (islower(text))
        {
            huruf_kecil++;
        }
        else if (isupper(text))
        {
            huruf_bersar++;
        }
        else if (isdigit(text))
        {
            angka++;
        }
    }

    printf("-----------------------\n");
    printf("Jumlah huruf kecil: ");
    putchar(huruf_kecil % 10 + '0');
    putchar('\n');

    printf("-----------------------\n");
    printf("Jumlah huruf besar: ");
    putchar(huruf_bersar % 10 + '0');
    putchar('\n');

    printf("-----------------------\n");
    printf("Jumlah Angka: ");
    putchar(angka % 10 + '0');
    putchar('\n');
    printf("-----------------------\n");

    return 0;
}
