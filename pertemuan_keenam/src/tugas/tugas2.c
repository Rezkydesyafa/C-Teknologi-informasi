#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int huruf_consosnan = 0, huruf_vokal = 0, total_huruf = 0;

    // Meminta input string dari pengguna menggunakan fgets
    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    // Menghitung jumlah huruf konsonan, vokal, dan total huruf
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        // Memeriksa apakah karakter adalah huruf
        if (isalpha(ch)) {
            total_huruf++; // Menambah total huruf

            // Memeriksa apakah karakter adalah vokal
            if (strchr("aeiouAEIOU", ch)) {
                huruf_vokal++;
            }
            // Jika bukan vokal, berarti konsonan
            else {
                huruf_consosnan++;
            }
        }
    }

    // Menampilkan hasil menggunakan fputs
    fputs("Jumlah huruf vokal: ", stdout);
    char vowel_result[10];
    sprintf(vowel_result, "%d \n", huruf_vokal); // Mengonversi angka ke string
    fputs(vowel_result, stdout);              // Menampilkan hasil vokal            

    fputs("Jumlah huruf konsonan: ", stdout);
    char consonant_result[10];
    sprintf(consonant_result, "%d\n", huruf_consosnan); // Mengonversi angka ke string
    fputs(consonant_result, stdout);                   // Menampilkan hasil konsonan                
    fputs("Jumlah total huruf: ", stdout);
    char total_result[10];
    sprintf(total_result, "%d\n", total_huruf);  // Mengonversi angka total huruf ke string
    fputs(total_result, stdout);               // Menampilkan total huruf
    return 0;
}
