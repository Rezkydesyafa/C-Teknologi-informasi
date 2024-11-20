#include <stdio.h>
#include <ctype.h>

int main()
{
    int lowercase_count = 0, uppercase_count = 0;
    char ch;

    // Pesan input
    printf("Masukkan teks : \n");

    // Membaca karakter satu per satu menggunakan getchar
    while ((ch = getchar()) != '\n')
    {
        if (islower(ch))
        {
            lowercase_count++;