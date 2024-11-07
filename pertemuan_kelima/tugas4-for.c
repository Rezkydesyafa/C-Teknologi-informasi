#include <stdio.h>
#include <string.h>

int main() {
    char data_diri[20][50] = {""}; // Array untuk 20 string kosong
    char list_data_diri[20][50] = {
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
    
    printf("====================================\n");
    printf("        Masukan Data Diri Anda       \n");
    printf("====================================\n");

    for (int i = 0; i < 20; i++) {
        printf("%d. Masukan %s : ", i + 1,list_data_diri[i]);
        scanf(" %[^\n]", data_diri[i]);
    }

    printf("\n====================================\n");
    printf("        Daftar Data Diri Anda        \n");
    printf("====================================\n");

    for (int i = 0; i < 20; i++) {
        printf("%d. %s : %s\n", i + 1,list_data_diri[i], data_diri[i]);

        
    }
    for (int i = 0; i < 20; i++) {
        printf ("masukan nama : ", i + 1,list_data_diri[i]);
        scanf(" %[^\n]", data_diri[i]);
        
    }


    return 0;
}



