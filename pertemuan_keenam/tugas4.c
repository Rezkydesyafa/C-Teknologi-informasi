#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Array statis
    char data[5] = {'a', 'b', 'c', 'd', 'e'}, *ptr;
    int n = 5, index;

    // array dinamis
    ptr = (char *)malloc(n * sizeof(char));
    if (ptr == NULL)
    {
        printf("Gagal mengalokasikan memori.\n");
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        ptr[i] = data[i];
    }

    printf("Array awal:\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("data[%d] = %c\n", i, ptr[i]);
    }
    // Modifikasi array
    printf("--------------------------------------------\n");
    printf("Masukkan indeks yang ingin diubah: ", n - 1);
    scanf("%d", &index);

    if (index >= 0 && index < n)
    {
        char data_baru;
        printf("Masukkan nilai baru: ");
        scanf(" %c", &data_baru);
        ptr[index] = data_baru;
    }    else
    {
        printf("Indeks tidak valid.\n");
    }

    printf("\nArray setelah modifikasi:\n");
    for (int i = 0; i < n; i++)
    {
        printf("data[%d] = %c\n", i, ptr[i]);
    }
    return 0;
}
