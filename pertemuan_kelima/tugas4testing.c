#include <stdio.h>
#include <string.h>

int main() {
    // Menentukan jumlah data maksimal
    char data_diri[20][50] = {""}; // Array untuk 5 string kosong
    char list_DataDiri[20][50] = {
        "Nama Lengkap",
        "Nama panggilan",
        "Asal kota",
        "Domisili",
        "Kota Lahir",
        "Kewarganegaraan",
        "Hobi",
        "Status",
        "Universitas",
        "Fakultas",
        "Prodi",
        "Cita - cita",
        "Role",
        "Jenis kelamin",
        "Alamat",
        "Pekerjaan",
        "Agamma",
        "Pendidikan terakhir",
        "Bahasa favorit",
        "Framework favorit",
        
    };
    int jumlah_data = 20;

    

    for (int i = 0; i < jumlah_data; i++) {
        printf("%d. Masukan %s : ", i + 1,list_DataDiri[i]);
        fgets(data_diri[i], sizeof(data_diri[i]), stdin);

        data_diri[i][strcspn(data_diri[i], "\n")] = '\0';
    }

    // Menampilkan data yang telah dimasukkan
    printf("\n Berikut adalah data diri anda:\n");
    for (int i = 0; i < jumlah_data; i++) {
        printf("%d. %s : %s\n", i + 1,list_DataDiri[i], data_diri[i]);
    }

    return 0;
}