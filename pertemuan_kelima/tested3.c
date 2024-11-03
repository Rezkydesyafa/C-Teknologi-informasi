#include <stdio.h>

int main() {
    int jumlahPasien, usia, tekananDarah;
    char nama[50];
    char ulang;

    printf("Selamat datang di Medical Check-Up Rumah Sakit UNISA!\n");
    printf("Masukkan jumlah pasien yang ingin diperiksa: ");
    scanf("%d", &jumlahPasien);

    for (int i = 1; i <= jumlahPasien; i++) { // Loop untuk setiap pasien
        printf("\nPemeriksaan pasien #%d\n", i);
        printf("Nama Pasien: ");
        scanf("%s", nama);
        printf("Usia Pasien: ");
        scanf("%d", &usia);
        printf("Tekanan Darah Pasien (mmHg): ");
        scanf("%d", &tekananDarah);

        printf("\nHasil Medical Check-Up untuk %s:\n", nama);

        // Nested if-else untuk kategori usia
        if (usia < 18) {
            printf("- Kategori Usia: Anak-anak\n");
        } else if (usia >= 18 && usia <= 59) {
            printf("- Kategori Usia: Dewasa\n");
        } else {
            printf("- Kategori Usia: Lansia\n");
        }

        // Nested if-else untuk kategori tekanan darah
        if (tekananDarah < 90) {
            printf("- Tekanan Darah: Rendah\n");
        } else if (tekananDarah >= 90 && tekananDarah <= 120) {
            printf("- Tekanan Darah: Normal\n");
        } else if (tekananDarah > 120 && tekananDarah <= 140) {
            printf("- Tekanan Darah: Pre-Hipertensi\n");
        } else {
            printf("- Tekanan Darah: Hipertensi\n");
        }

        // Opsional: rekomendasi pemeriksaan lanjutan berdasarkan kondisi
        if (usia >= 60 || tekananDarah > 140) {
            printf("- Rekomendasi: Pemeriksaan lanjutan disarankan.\n");
        } else {
            printf("- Rekomendasi: Tidak diperlukan pemeriksaan lanjutan.\n");
        }

        // Menanyakan apakah ingin melanjutkan ke pasien berikutnya
        if (i < jumlahPasien) {
            printf("\nApakah ingin melanjutkan ke pasien berikutnya? (y/n): ");
            scanf(" %c", &ulang);
            if (ulang == 'n' || ulang == 'N') {
                printf("Pemeriksaan dihentikan.\n");
                break;
            }
        }
    }

    printf("\nTerima kasih telah menggunakan layanan Medical Check-Up di Rumah Sakit UNISA!\n");

    return 0;
}
