#include <stdio.h>
#include <math.h>


int main() {
    int pilih, pilihan;
    double hasil, sisi, pajang, lebar, jarijari;

    printf("Program Menghitung Bangun Datar\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("Pilih Bangun Datar: \n");
    scanf("%d",&pilih);

    switch (pilih)
    {
    case 1:
        printf("Program Menghitung Bangun Datar\n");
        printf("1. Persegi\n");
        printf("2. Persegi Panjang\n");
        printf("Input pilihan : \n");   
        scanf("%i",&pilihan);

        if (pilihan == 1)
        {
            printf("\ninput sisi persegi : ");
            scanf("%lf",&sisi);
            printf("\n sisi : %lf\n",sisi);
            hasil = sisi*sisi;
            printf("\n Luas persegi: %lf\n", hasil);
            
        }
        else if (pilih == 2)
        {
            printf("\ninput sisi persegi");
            scanf("%lf",&sisi);
            hasil =  4 * sisi;
            printf("\n Keliling persegi: %lf\n", hasil);    
        }else
        {
            printf("\nSalah input\n");
        }
        break;
    case 2 :
        printf("\n Menghitung Luas dan Keliling\n");
        printf("1. Luas\n");
        printf("2. Keliling\n");
        printf("Input Pilihan : \n");   
        scanf("%i",&pilihan);

        if (pilihan == 1)
        {
            printf("\ninput panjang : ");
            scanf("%lf",&pajang);
            printf("\ninput lebar : ");
            scanf("%lf",&lebar);
            hasil =  pajang*lebar;
            printf("\n Luas persegi panjang: %lf\n", hasil);
            
        }
        else if (pilih == 2)
        {
            printf("\ninput panjang");
            scanf("%lf",&pajang);
            printf("\ninput lebar");
            scanf("%lf",&lebar);
            hasil =  2 * (pajang+lebar);
            printf("\n Keliling persegi panjang: %lf\n", hasil);    
        }else
        {
            printf("\nSalah input\n");
        }
        break;
    
    case 3 :
        printf("\n Menghitung Luas dan Keliling\n");
        printf("1. Luas\n");
        printf("2. Keliling\n");
        printf("Input Pilihan : \n");   
        scanf("%i",&pilihan);

        if (pilihan == 1)
        {
            printf("\ninput jari-jari lingkaran : ");
            scanf("%lf",&jarijari);
            hasil =  3.14 * pow(jarijari, 2);
            printf("\n Luas lingkaran: %lf\n", hasil);
            
        }
        else if (pilih == 2)
        {
            printf("\ninput jari-jari lingkaran : ");
            scanf("%lf",&jarijari);
            hasil =  2* 3.14 * jarijari;
            printf("\n Keliling persegi panjang: %lf\n", hasil);    
        }
        else
        {
            printf("\nSalah input\n");
        }
        break;
    
    default:
    printf("Pilihan salah !\n");
        break;
    }
    return 0;
}