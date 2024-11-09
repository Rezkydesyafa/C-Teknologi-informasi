#include <stdio.h>
#include <ctype.h>  // Menyertakan pustaka ctype.h

// Fungsi untuk enkripsi dan dekripsi Caesar Cipher
void caesar_cipher(int shift, int mode) {
    int text;

    printf("Masukkan teks yang ingin diproses (akhiri dengan Enter):\n");
    while ((text = getchar()) != '\n') {  // Membaca hingga newline
        if (isalpha(text)) {  // Memeriksa apakah karakter adalah huruf
            if (islower(text)) {
                // Jika huruf kecil
                text = ((text - 'a' + mode * shift) % 26 + 26) % 26 + 'a';
            } else if (isupper(text)) {
                // Jika huruf besar
                text = ((text - 'A' + mode * shift) % 26 + 26) % 26 + 'A';
            }
        }
        putchar(text);  // Menampilkan karakter hasil enkripsi atau dekripsi
    }
    putchar('\n');  // Baris baru setelah input selesai3
}

int main() {
    int shift, choice;

    // Pilihan untuk enkripsi atau dekripsi
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
