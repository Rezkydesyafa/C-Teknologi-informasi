#include <stdio.h> // Memasukkan pustaka standar input-output untuk fungsi seperti printf() dan scanf()

int main()
{
    // Deklarasi variabel float untuk menyimpan panjang sisi segitiga (a, b, c),
    // luas dan keliling segitiga. Menggunakan tipe float karena bisa menyimpan angka desimal.
    float a, b, c, luas_segitiga, keliling_segitiga;

    // Deklarasi variabel integer untuk jumlah segitiga yang mungkin digunakan dalam perulangan.
    int jumlah_segitiga;

    // Menampilkan judul aplikasi ke layar sebagai bagian pembuka program
    printf("====================================\n");
    printf("   Aplikasi Pengecekan Segitiga     \n");
    printf("====================================\n");

    // Bagian ini (komentar) disiapkan untuk memasukkan jumlah segitiga yang akan dicek sekaligus
    // namun tidak digunakan dalam versi ini
    // printf("Masukan Jumlah segitiga yang akan di cek dan hitung : ");
    // scanf("%d", &jumlah_segitiga);
    // printf("------------------------------------\n");

    // Perulangan tak terbatas menggunakan for, yang akan berhenti hanya jika ada kondisi break.
    // Variabel i tidak memengaruhi jalannya program; digunakan sekadar sebagai syarat agar perulangan terjadi.
    for (int i = 0; i >= 0; i++)
    {
        // Menampilkan pembatas untuk memisahkan input dan output setiap kali segitiga baru dimasukkan
        printf("------------------------------------\n");

        // Menampilkan pesan untuk meminta input panjang sisi segitiga dalam satuan cm
        printf("Masukkan panjang sisi segitiga dalam centimeter :\n");

        // Meminta pengguna memasukkan nilai untuk sisi pertama (a) segitiga
        printf("Sisi a : ");
        scanf("%f", &a); // Membaca input panjang sisi a dalam tipe float

        // Jika nilai sisi a yang dimasukkan adalah negatif, keluar dari loop menggunakan break
        if (a < 0)
            break;

        // Meminta pengguna memasukkan nilai untuk sisi kedua (b) segitiga
        printf("Sisi b: ");
        scanf("%f", &b); // Membaca input panjang sisi b dalam tipe float

        // Jika nilai sisi b yang dimasukkan adalah negatif, keluar dari loop menggunakan break
        if (b < 0)
            break;

        // Meminta pengguna memasukkan nilai untuk sisi ketiga (c) segitiga
        printf("Sisi c: ");
        scanf("%f", &c); // Membaca input panjang sisi c dalam tipe float

        // Jika nilai sisi c yang dimasukkan adalah negatif, keluar dari loop menggunakan break
        if (c < 0)
            break;

        // Menampilkan pembatas untuk menunjukkan batas akhir dari input panjang sisi
        printf("------------------------------------\n");

        // Memeriksa apakah sisi-sisi yang dimasukkan bisa membentuk segitiga dengan syarat:
        // jumlah dua sisi mana pun harus lebih besar dari sisi yang lain
        if (a + b > c && a + c > b && b + c > a)
        {
            // Jika ketiga sisi sama panjang, maka segitiga tersebut adalah segitiga sama sisi
            if (a == b && b == c)
            {
                printf("Segitiga sama sisi\n"); // Menampilkan jenis segitiga

                // Menghitung luas segitiga (mengasumsikan 0.5 * a * b, meskipun rumus ini lebih cocok untuk segitiga siku-siku)
                luas_segitiga = 0.5 * a * b;

                // Menghitung keliling segitiga sama sisi: tiga kali panjang salah satu sisinya
                keliling_segitiga = 3 * a;

                // Menampilkan luas dan keliling segitiga ke layar
                printf("------------------------------------\n");
                printf("Luas segitiga : %.2f cm\n", luas_segitiga); // %.2f untuk dua angka desimal
                printf("Keliling segitiga : %.2f cm\n", keliling_segitiga);
                printf("------------------------------------\n");
            }
            // Jika dua sisi sama panjang, maka segitiga tersebut adalah segitiga sama kaki
            else if (a == b || b == c || a == c)
            {
                printf("Segitiga sama kaki\n"); // Menampilkan jenis segitiga

                // Menghitung luas segitiga (dengan rumus 0.5 * a * b)
                luas_segitiga = 0.5 * a * b;

                // Menghitung keliling segitiga sama kaki: penjumlahan semua sisi
                keliling_segitiga = a + b + c;

                // Menampilkan luas dan keliling segitiga ke layar
                printf("------------------------------------\n");
                printf("Luas segitiga : %.2f cm\n", luas_segitiga);
                printf("Keliling segitiga : %.2f cm\n", keliling_segitiga);
                printf("------------------------------------\n");
            }
            // Jika semua sisi berbeda panjang, maka segitiga tersebut adalah segitiga sembarang
            else
            {
                printf("Segitiga sembarang\n"); // Menampilkan jenis segitiga

                // Menghitung luas segitiga (dengan rumus 0.5 * a * b)
                luas_segitiga = 0.5 * a * b;

                // Menghitung keliling segitiga sembarang: penjumlahan semua sisi
                keliling_segitiga = a + b + c;

                // Menampilkan luas dan keliling segitiga ke layar
                printf("Luas segitiga : %.2f cm\n", luas_segitiga);
                printf("Keliling segitiga : %.2f cm\n", keliling_segitiga);
            }
        }
        // Jika nilai sisi tidak memenuhi syarat sebagai segitiga
        else
        {
            // Memberi pesan bahwa sisi-sisi tersebut tidak membentuk segitiga
            printf("Input tidak membentuk segitiga.\n");

            // Memeriksa apakah sisi-sisi yang dimasukkan membentuk garis lurus
            // jika jumlah dua sisi sama dengan sisi yang lain
            if (a + b == c || a + c == b || b + c == a)
            {
                printf("Input membentuk garis lurus.\n");
            }
            // Jika tidak memenuhi syarat segitiga atau garis lurus, bentuk dianggap tidak valid
            else
            {
                printf("Input tidak membentuk bentuk geometri yang valid.\n");
            }
        }
    }
    return 0; // Mengakhiri program, nilai 0 menandakan program berjalan tanpa error
}