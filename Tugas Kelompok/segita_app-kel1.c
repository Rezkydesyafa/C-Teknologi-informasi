#include <stdio.h>

int main()
{

    float a, b, c, luas_segitiga, keliling_segitiga;
    int jumlah_segitiga;

    printf("====================================\n");
    printf("   Aplikasi Pengecekan Segitiga     \n");
    printf("====================================\n");

    // printf("Masukan Jumlah segitiga yang akan di cek dan hitung : ");
    // scanf("%d", &jumlah_segitiga);
    // printf("------------------------------------\n");

    for (int i = 0; i >= 0; i++)
    {
        printf("------------------------------------\n");
        printf("Masukkan panjang sisi segitiga dalam centimeter :\n");

        printf("Sisi a : ");
        scanf("%f", &a);
        if (a < 0)
            break;

        printf("Sisi b: ");
        scanf("%f", &b);
        if (b < 0)
            break;

        printf("Sisi c: ");
        scanf("%f", &c);
        if (c < 0)
            break;
        printf("------------------------------------\n");

        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
            {
                printf("Segitiga sama sisi\n");
                luas_segitiga = 0.5 * a * b;
                keliling_segitiga = 3 * a;
                printf("------------------------------------\n");
                printf("Luas segitiga : %.2f cm\n", luas_segitiga);
                printf("keliling segitiga : %.2f cm\n", keliling_segitiga);
                printf("------------------------------------\n");
            }
            else if (a == b || b == c || a == c)
            {
                printf("Segitiga sama kaki\n");

                luas_segitiga = 0.5 * a * b;
                keliling_segitiga = a + b + c;
                printf("------------------------------------\n");
                printf("Luas segitiga : %.2f cm\n", luas_segitiga);
                printf("keliling segitiga : %.2f cm\n", keliling_segitiga);
                printf("------------------------------------\n");
            }
            else
            {
                printf("Segitiga sembarang\n");
                luas_segitiga = 0.5 * a * b;
                keliling_segitiga = a + b + c;
                printf("Luas segitiga : %.2f cm\n", luas_segitiga);
                printf("keliling segitiga : %.2f cm\n", keliling_segitiga);
            }
        }
        else
        {
            printf("Input tidak membentuk segitiga.\n");
            // Mengidentifikasi bentuk geometri lainnya
            if (a + b == c || a + c == b || b + c == a)
            {
                printf("Input membentuk garis lurus.\n");
            }
            else
            {
                printf("Input tidak membentuk bentuk geometri yang valid.\n");
            }
        }
    }
    return 0;
}