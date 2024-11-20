#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    fputs("---------------------------------------------\n", stdout);
    fputs("Masukkan sebuah sebuah string atau kalimat : \n", stdout);
    fputs("---------------------------------------------\n", stdout);

    int length = strlen(str);

    fputs("Panjang string: \n", stdout);
    fputs("---------------------------------------------\n", stdout);
    printf("%d\n", length);

    return 0;
}
