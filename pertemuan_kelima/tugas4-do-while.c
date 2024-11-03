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
    int jumlah_data = 20;
    int i = 0;

    printf("====================================\n");
    printf("        Masukan Data Diri Anda       \n");
    printf("====================================\n");




    do{
        printf("%d. Masukan %s : ", i + 1,list_data_diri[i]);
        scanf(" %[^\n]", data_diri[i]);

        i++;
    } while (i < jumlah_data );
    


    printf("\n====================================\n");
    printf("        Daftar Data Diri Anda        \n");
    printf("====================================\n");

    int k = 0;
    

    do {
        printf("%d. %s : %s\n", k + 1,list_data_diri[k], data_diri[k]);
        k++;
    } while (k <jumlah_data);
    

    return 0;
}