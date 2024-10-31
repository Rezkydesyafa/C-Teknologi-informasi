#include <stdio.h>
#include <ctype.h>

int main (){

    char grade;

    printf("Masukan Nilai Huruf : \n");
    scanf("%c", &grade);

    switch (toupper(grade)){       
        case 'A':
            printf("Masyaalah luar biasa \n");
        break;
        case 'B':
        case 'C':
            printf("Bagus \n");
        break;
        case 'D':
            printf("Cukup baik \n");
        break;
        case 'E':
            printf("Remedial \n");
        break;
        default:
            printf("Grade salah  \n");
            
    }
}