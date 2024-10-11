#include <stdio.h>
#include <math.h>
#include <time.h>


int main() {
    

    char nama_Pelanggan[50], id_Pelanggan[20];
    float tarif = 5000, kecepatan, biaya_tetap = 100000, totalTagihan, tagihan, pajak_PPN ,diskon = 0.0;
    time_t waktu_sekarang;
    struct tm *info_waktu;
    char buffer[20];

    time(&waktu_sekarang);
    info_waktu = localtime(&waktu_sekarang);
    strftime(buffer, sizeof(buffer), "%d/%m/%Y", info_waktu);




    printf("\nProgram Tagihan Internet Wifi\n\n");
    printf("=========== Data Pelangggan ===========\n");
    printf("---------------------------------------\n");
    printf("Masukkan Nama Pelanggan : ");
    scanf("%[^\n]s",&nama_Pelanggan);
    printf("Masukkan ID Pelanggan   : ");
    scanf("%s",&id_Pelanggan);
    printf("Masukkan Kecepatan      : ");
    scanf("%f",&kecepatan); 


    tagihan = (kecepatan *tarif)+ biaya_tetap; 
    pajak_PPN = 0.11*tagihan;
    diskon = (kecepatan >=20)*0.15*tagihan;
    totalTagihan = tagihan - diskon;

    printf("\n=========== Rincian Tagihan ===========\n");
    printf("Tanggal: %s/TRX-%s \n", buffer,id_Pelanggan);
    printf("---------------------------------------\n");
    printf("Nama Pelanggan          : %s\n", nama_Pelanggan);
    printf("ID Pelanggan            : TRX-%s\n", id_Pelanggan);
    printf("Kecepatan               : %.f Mbps\n", kecepatan);
    printf("Biaya Tetap             : Rp. %.2f\n", biaya_tetap);
    printf("Tagihan                 : Rp. %.2f\n", tagihan);
    printf("Pajak PPN               : Rp. %.2f\n", pajak_PPN);
    printf("Diskon                  : Rp. %.2f\n", diskon);
    printf("---------------------------------------\n");
    printf("Total Tagihan           : Rp. %.2f\n", totalTagihan);
    printf("---------------------------------------\n");

    return 0;



// PROGRAN TAGIHAN INTERNET WIFI
// DEKLARASI
//         nama_Pelanggan=char
//         id_Pelanggan=char
//         tarif=float
//         kecepatan=float
//         biaya_tetap=float
//         totalTagihan=float
//         tagihan=float
//         diskon=float
//         waktu_sekarang=time_t
//         info_waktu=struct
//         buffer=char
    // ALGORITMA
    // scanf (nama_Pelanggan) {masukan nama pelanggan}
    // scanf (id_Pelanggan)   {masukan tunjangan}
    // scanf (kecepatan)      {masukan kecepatan}
    // tagihan  ←  (kecepatan *tarif)+biaya_tetap
    // diskon  ← (kecepatan >=20)*0.15*tagihan
    // totalTagihan  ← tagihan - diskon
    // printf (nama_Pelanggan) {namapelanggan}
    // printf (id_Pelanggan)   {idpelanggan}
    // printf (kecepatan)      {kecepatan}
    // printf (biaya_tetap)    {biayatetap}
    // printf (tagihan)        {kecepatan dikali tarif ditambah biayatetap}
    // printf (diskon)         {kecepatan lebih dari sama dengan 20 }
    // printf (hasil)          {tagihan dikurangi diskon}
    

// Algoritma_hitungTagihanInternet
// {menghitung tagihan internet pelanggan}
// Deklarasi:
// nama_Pelanggan = char, id_Pelanggan = float, tarif = float, kecepatan = float
// biaya_tetap = float, totalTagihan = float, tagihan = float, diskon = float
// waktu_sekarang = time_t, info_waktu = struct, buffer = char
// Deskripsi:
// Input nama_Pelanggan
// Input id_Pelanggan
// Input kecepatan
// tagihan = (kecepatan *tarif)+biaya_tetap
// diskon  = (kecepatan >=20)*0.15*tagihan
// totalTagihan = tagihan - diskon
// Cetak tagihan Internet
































    // printf("Pilih paket internet:\n");
    // printf("1. Paket 10GB (Rp 100.000)\n");
    // printf("2. Paket 20GB (Rp 150.000)\n");
    // printf("3. Paket 50GB (Rp 300.000)\n");
    // printf("Masukkan pilihan (1-3): ");
    // scanf("%d", &pilihan_paket);

    // pilihan_paket = (pilihan_paket < 1 || pilihan_paket > JUMLAH_PAKET) ? 1 : pilihan_paket;
    // pilihan_paket--; // Mengubah input 1-3 menjadi indeks array 0-2

    // printf("Masukkan penggunaan internet aktual (dalam GB): ");
    // scanf("%f", &penggunaan_aktual);

    // penggunaan_tambahan = fmaxf(penggunaan_aktual - kuota_paket[pilihan_paket], 0);
    // biaya_tambahan = penggunaan_tambahan * HARGA_PER_GB;
    // total_tagihan = biaya_dasar[pilihan_paket] + biaya_tambahan;

    // printf("\nRincian Tagihan:\n");
    // printf("Paket yang dipilih: %.0f GB\n", kuota_paket[pilihan_paket]);
    // printf("Biaya dasar: Rp %.2f\n", biaya_dasar[pilihan_paket]);
    // printf("Penggunaan aktual: %.2f GB\n", penggunaan_aktual);
    // printf("Penggunaan tambahan: %.2f GB\n", penggunaan_tambahan);
    // printf("Biaya tambahan: Rp %.2f\n", biaya_tambahan);
    // printf("Total tagihan: Rp %.2f\n", total_tagihan);

    // return 0;


    

};