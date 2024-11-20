#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jumlah, *nilai, total = 0, maksimum, minimum;

    printf("Masukkan jumlah nilai siswa: ");
    scanf("%d", &jumlah);

    // Alokasi memori untuk nilai siswa
    nilai = (int *)malloc(jumlah * sizeof(int));

    // Memeriksa alokasi memori
    if (!nilai)
    {
        printf("Memori tidak cukup!\n");
        return 1;
    }

    // Input nilai dan hitung total, maksimum, minimum
    printf("Masukkan nilai siswa:\n");
    for (int i = 0; i < jumlah; i++)
    {
        scanf("%d", &nilai[i]);
        total += nilai[i];

        if (i == 0 || nilai[i] > maksimum)
            maksimum = nilai[i];
        if (i == 0 || nilai[i] < minimum)
            minimum = nilai[i];
    }

    // Tampilkan hasil
    printf("Rata-rata: %.2f\n", (float)total / jumlah);
    printf("Tertinggi: %d\n", maksimum);
    printf("Terendah: %d\n", minimum);
    
    return 0;
}