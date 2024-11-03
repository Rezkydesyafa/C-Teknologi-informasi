#include <stdio.h>

int main() {
  // Menu pilihan pemeriksaan
  printf("---------------------------------------\n");
  printf("Medical Check Up Rumah Sakit UNISA\n");
  printf("---------------------------------------\n");
  printf("1. Pemeriksaan Umum\n");
  printf("2. Pemeriksaan Gigi\n");
  printf("3. Pemeriksaan Mata\n");
  printf("4. Pemeriksaan Jantung\n");
  printf("5. Keluar\n");
  printf("---------------------------------------\n");

  // Meminta input pilihan pemeriksaan
  int pilihan;
  printf("Masukkan pilihan pemeriksaan: ");
  scanf("%d", &pilihan);

  // Melakukan pemeriksaan sesuai dengan pilihan
  switch (pilihan) {
    case 1:
      // Pemeriksaan Umum
      printf("---------------------------------------\n");
      printf("Pemeriksaan Umum\n");
      printf("---------------------------------------\n");

      // Menampilkan daftar pemeriksaan
      printf("Daftar pemeriksaan:\n");
      printf("1. Tekanan Darah\n");
      printf("2. Tinggi Badan\n");
      printf("3. Berat Badan\n");

      // Meminta input pilihan pemeriksaan
      int pilihan_umum;
      printf("Masukkan pilihan pemeriksaan: ");
      scanf("%d", &pilihan_umum);

      // Melakukan pemeriksaan sesuai dengan pilihan
      switch (pilihan_umum) {
        case 1:
          // Pemeriksaan Tekanan Darah
          printf("---------------------------------------\n");
          printf("Pemeriksaan Tekanan Darah\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("Tekanan Darah: 120/80 mmHg\n");
          break;

        case 2:
          // Pemeriksaan Tinggi Badan
          printf("---------------------------------------\n");
          printf("Pemeriksaan Tinggi Badan\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("Tinggi Badan: 170 cm\n");
          break;

        case 3:
          // Pemeriksaan Berat Badan
          printf("---------------------------------------\n");
          printf("Pemeriksaan Berat Badan\n");
          printf("-------------------------------- -------\n");

          // Menampilkan hasil pemeriksaan
          printf("Berat Badan: 60 kg\n");
          break;

        default:
          printf("Pilihan tidak valid!\n");
          break;
      }
      break;

    case 2:
      // Pemeriksaan Gigi
      printf("---------------------------------------\n");
      printf("Pemeriksaan Gigi\n");
      printf("---------------------------------------\n");

      // Menampilkan daftar pemeriksaan
      printf("Daftar pemeriksaan:\n");
      printf("1. Pemeriksaan Gigi Depan\n");
      printf("2. Pemeriksaan Gigi Belakang\n");

      // Meminta input pilihan pemeriksaan
      int pilihan_gigi;
      printf("Masukkan pilihan pemeriksaan: ");
      scanf("%d", &pilihan_gigi);

      // Melakukan pemeriksaan sesuai dengan pilihan
      switch (pilihan_gigi) {
        case 1:
          // Pemeriksaan Gigi Depan
          printf("---------------------------------------\n");
          printf("Pemeriksaan Gigi Depan\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("Gigi Depan: Sehat\n");
          break;

        case 2:
          // Pemeriksaan Gigi Belakang
          printf("---------------------------------------\n");
          printf("Pemeriksaan Gigi Belakang\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("Gigi Belakang: Sehat\n");
          break;

        default:
          printf("Pilihan tidak valid!\n");
          break;
      }
      break;

    case 3:
      // Pemeriksaan Mata
      printf("---------------------------------------\n");
      printf("Pemeriksaan Mata\n");
      printf("---------------------------------------\n");

      // Menampilkan daftar pemeriksaan
      printf("Daftar pemeriksaan:\n");
      printf("1. Pemeriksaan Penglihatan\n");
      printf("2. Pemeriksaan Keseimbangan\n");

      // Meminta input pilihan pemeriksaan
      int pilihan_mata;
      printf("Masukkan pilihan pemeriksaan: ");
      scanf("%d", &pilihan_mata);

      // Melakukan pemeriksaan sesuai dengan pilihan
      switch (pilihan_mata) {
        case 1:
          // Pemeriksaan Penglihatan
          printf("---------------------------------------\n");
          printf("Pemeriksaan Penglihatan\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("Penglihatan: 20/20\n");
          break;

        case 2:
          // Pemeriksaan Keseimbangan
          printf("---------------------------------------\n");
          printf("Pemeriksaan Keseimbangan\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("Keseimbangan: Normal\n");
          break;

        default:
          printf("Pilihan tidak valid!\n");
          break;
      }
      break;

    case 4:
      // Pemeriksaan Jantung
      printf("---------------------------------------\n");
      printf("Pemeriksaan Jantung\n");
      printf("---------------------------------------\n");

      // Menampilkan daftar pemeriksaan
      printf("Daftar pemeriksaan:\n");
      printf("1. Pemeriksaan Tekanan Darah\n");
      printf("2. Pemeriksaan EKG\n");

      // Meminta input pilihan pemeriksaan
      int pilihan_jantung;
      printf("Masukkan pilihan pemeriksaan: ");
      scanf("%d", &pilihan_jantung);

      // Melakukan pemeriksaan sesuai dengan pilihan
      switch (pilihan_jantung) {
        case 1:
          // Pemeriksaan Tekanan Darah
          printf("---------------------------------------\n");
          printf("Pemeriksaan Tekanan Darah\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("Tekanan Darah: 120/80 mmHg\n");
          break;

        case 2:
          // Pemeriksaan EKG
          printf("---------------------------------------\n");
          printf("Pemeriksaan EKG\n");
          printf("---------------------------------------\n");

          // Menampilkan hasil pemeriksaan
          printf("EKG: Normal\n");
          break;

        default:
          printf("Pilihan tidak valid!\n");
          break;
      }
      break;

    case 5:
      // Keluar
      printf("Terima kasih telah menggunakan Medical Check Up Rumah Sakit UNISA!\n");
      break;

    default:
      printf("Pilihan tidak valid!\n");
      break;
  }

  return 0;
}