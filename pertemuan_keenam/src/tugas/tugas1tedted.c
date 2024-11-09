#include <stdio.h>
#include <ctype.h>  // Menyertakan pustaka ctype.h

void caesar_cipher(int shift, int mode) {
    int ch;

    printf("Masukkan teks yang ingin diproses (akhiri dengan Enter):\n");
    while ((ch = getchar()) != '\n') {  // Membaca hingga newline
        if (isalpha(ch)) {  // Memeriksa apakah karakter adalah huruf
            if (islower(ch)) {
                // Jika huruf kecil
                ch = ((ch - 'a' + mode * shift) % 26 + 26) % 26 + 'a';
            } else if (isupper(ch)) {
                // Jika huruf besar
                ch = ((ch - 'A' + mode * shift) % 26 + 26) % 26 + 'A';
            }
        }
        // Jika bukan huruf, karakter tetap sama
        
        putchar(ch);  // Menampilkan karakter hasil enkripsi atau dekripsi
    }
    putchar('\n');  // Baris baru setelah input selesai
}

int main() {
    int shift, choice;

    printf("Pilih mode:\n");
    printf("1. Enkripsi\n");
    printf("2. Dekripsi\n");
    printf("Masukkan pilihan (1 atau 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("Pilihan tidak valid.\n");
        return 1;
    }

    printf("Masukkan besar pergeseran kunci: ");
    scanf("%d", &shift);

    // Normalisasi shift jika negatif atau lebih dari 26
    shift = shift % 26;
    if (shift < 0) shift += 26;

    // Mengabaikan karakter newline setelah memasukkan shift dan pilihan
    getchar(); 

    // Jika pilihan adalah dekripsi, shift menjadi negatif
    int mode = (choice == 1) ? 1 : -1;

    caesar_cipher(shift, mode);

    return 0;
}
