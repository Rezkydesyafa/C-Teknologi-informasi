#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilihan;
    printf("Pilih opsi (1 untuk melanjutkan, 0 untuk keluar): ");
    scanf("%d", &pilihan);

    if (pilihan == 0)
    {
        printf("Program dihentikan.\n");
        exit(0); // Menghentikan program
    }

    printf("Program dilanjutkan.\n");
    return 0;
}
