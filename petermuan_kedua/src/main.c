#include <stdio.h>
#include<conio.h>
int main()
{
    printf("Kalkulator Sederhana\n");  

    int a, b, c, d, hasil;    

    printf("\nMasukkan nilai a = ");     
    scanf("%i",&a);
    printf("\nMasukkan nilai b = ");     
    scanf("%i",&b);
    printf("\nMasukkan nilai c = ");
    scanf("%i",&c);
    printf("\nMasukkan nilai d = "); 
    scanf("%i",&d);
    printf("\nnilai a = %i, b = %i, c = %i, d = %i", a, b, c, d);   

    printf("\n\nHasil Perhitungan:");      
    hasil = a + b;     
    printf("\nHasil dari: a + b adalah %d\n", hasil);     
    hasil = c - d;     
    printf("\nHasil dari: c - d adalah %d\n", hasil);     
    hasil = b * c;     
    printf("\nHasil dari: b * c adalah %d\n", hasil);     
    hasil = a / d;     
    printf("\nHasil dari: a / d adalah %d\n", hasil);
    hasil = a + b * c - d;     
    printf("\nHasil dari: a + b * c - d adalah %d\n", hasil);     
    hasil = a * b + c / d;     
    printf("\nHasil dari: a * b + c / d adalah %d\n", hasil);      
    
    getch();
}


//     printf("Program Konversi Suhu \n"); //output judul program
    
//     float celc, fahr, kelv, ream ;
    
//     printf("Input suhu celsius: ");
//     scanf("%f",&celc);
//     printf("\n");
    
//     fahr = (9.0/5.0 * celc) + 32;
//     kelv = celc + 273.15;
//     ream = celc * (4.0/5.0) ;
    
//     printf("%.2f derajat Celsius = %.2f derajat Fahrenheit \n",celc,fahr);
//     printf("%.2f derajat Celsius = %.2f derajat Kelvin \n",celc,kelv);
//     printf("%.2f derajat Celsius = %.2f derajat Reamur \n",celc,ream);
    
//     return 0;
// }