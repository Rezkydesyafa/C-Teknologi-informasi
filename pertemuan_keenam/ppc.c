#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Array statis untuk data awal
    char data_awal[5] = {'a', 'b', 'c', 'd', 'e'};
    char *array;
    int n = 5, tambah_index;

    array = (char *)malloc(n * sizeof(char));
    if (array == NULL)
    {
        printf("Gagal mengalokasikan memori.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        array[i] = data_awal[i];
    }
    printf("\nMasukkan jumlah elemen baru yang ingin ditambahkan: ");
    scanf("%d", &tambah_index);

    array = (char *)realloc(array, (n + tambah_index) * sizeof(char));
    if (array == NULL)
    {
        printf("Gagal memperbesar memori.\n");
        return 1;
    }
    printf("Masukkan nilai untuk elemen baru:\n");
    for (int i = n; i < n + tambah_index; i++)
    {
        printf("data[%d] = ", i);
        scanf(" %c", &array[i]);
    }

    printf("\nArray setelah ditambahkan elemen baru:\n");
    for (int i = 0; i < n + tambah_index; i++)
    {
        printf("data[%d] = %c\n", i, array[i]);
    }
    return 0;
}
