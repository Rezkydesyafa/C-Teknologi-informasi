#include <stdio.h>

int main() {
    // printf("Bilangan berpangkat 2 dari 1 sampai 10:\n");
    int jumlah_pangkat;
    printf("Masukan nilai jumlah pangkat 2 :\n");
    scanf("%d",&jumlah_pangkat);
    int pangkat_dua;
    

    for (int i = 1; i <= 10 ; i++) {
        pangkat_dua = i * i;
        
        printf("%d^2 = %d\n", i, pangkat_dua);
      
    }
    
    // return 0;
}


// #include <stdio.h>

// int main() {
    // float a, b, c;

    // printf("Masukkan panjang sisi pertama: ");
    // scanf("%f", &a);
    // printf("Masukkan panjang sisi kedua: ");
    // scanf("%f", &b);
    // printf("Masukkan panjang sisi ketiga: ");
    // scanf("%f", &c);

    // // Validasi input
    // if (a <= 0 || b <= 0 || c <= 0) {
    //     printf("Input salah: Panjang sisi harus lebih besar dari 0.\n");
    // }
    // // Cek apakah memenuhi syarat segitiga
    // else if (a + b > c && a + c > b && b + c > a) {
    //     if (a == b && b == c) {
    //         printf("Tipe segitiga: Segitiga Sama Sisi\n");
    //     } else if (a == b || b == c || a == c) {
    //         printf("Tipe segitiga: Segitiga Sama Kaki\n");
    //     } else {
    //         printf("Tipe segitiga: Segitiga Sembarang\n");
    //     }
    // }
    // // Cek bentuk geometri lainnya
    // else if (a == b && b == c && a == 0) {
    //     printf("Bentuk geometris: Titik\n");
    // } else if (a == b || b == c || a == c) {
    //     printf("Bentuk geometris: Garis\n");
    // } else {
    //     printf("Input salah: Tidak membentuk segitiga atau bentuk geometris lainnya.\n");
    // }

    // return 0;
// }


