#include <stdio.h> //library standar C
 
int main(void)
{
    printf("Program Konversi Suhu \n"); //output judul program
    
    // float ini merupakan tipe data
    float celc, fahr, kelv, ream ; //Ini Deklarasi variable
    
    printf("Input suhu celsius: ");             
    scanf("%f",&celc); // %f merupakan type variable
    printf("\n");
    
    // Dibawah ini merupakan assignment
    fahr = (9.0/5.0 * celc) + 32; // setelah "=" merupakan Expression
    kelv = celc + 273.15; 
    ream = celc * (4.0/5.0) ;


    printf("%.2f derajat Celsius = %.2f derajat Fahrenheit \n",celc,fahr);
    printf("%.2f derajat Celsius = %.2f derajat Kelvin \n",celc,kelv);
    printf("%.2f derajat Celsius = %.2f derajat Reamur \n",celc,ream);
    
    return 0;
    // printf, return, void, scanf merupakan contoh dari keyword
}
