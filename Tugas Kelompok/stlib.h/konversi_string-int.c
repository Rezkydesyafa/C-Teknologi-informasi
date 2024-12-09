#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    printf("Masukkan angka dalam bentuk string: ");
    scanf("%s", input);

    int angka = atoi(input);
    printf("Hasil konversi ke integer: %d\n", angka);

    return 0;
}
