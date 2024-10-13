
#include <stdio.h>
int main()
{
    char nama;
    float gaji_pokok, transport, tunjangan, gaji, hasil, pajak;

    printf("Program Menghitung Gaji Karyawan\n");
    printf("--------------------------------\n");
    printf("input nama karyawan : \n");
    scanf("%s", &nama);
    printf("input gaji pokok    : \n");
    scanf("%f", &gaji_pokok);
    printf("input transport     : \n");
    scanf("%f", &transport);
    printf("input tunjangan     : \n");
    scanf("%f", &tunjangan);

    gaji  = gaji_pokok+transport+tunjangan;
    pajak = 0.025 * gaji;
    hasil = gaji - pajak;

    printf("\ngaji anda adalah : %f\n", gaji);
    printf("\ngaji anda setelah dikurangi pajak adalah : %f\n", hasil);

    return 0;
}