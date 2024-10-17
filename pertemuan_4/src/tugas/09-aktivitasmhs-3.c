#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    int nilai;
    char makul;
    printf("Program Nilai Mata Kuliah");
    printf("\n-------------------------");
    printf("\t\n--------Daftar Makul-------");
    printf("\nA. Dasar Pemrograman Teori");
    printf("\nB. Dasar Pemrograman Praktikum");
    printf("\nPilih Makul [A/B]: ");
    scanf("%s", &makul);

    switch (toupper(makul))
    {
    case 'A':
        printf("\nMasukan Nilai : ");
        scanf("%i", &nilai);
        switch (nilai/10)
        {
            case 1:
            case 2:
                printf("\n Nilai anda E \n");   
                break;
            case 3:
            case 4:
                printf("\n Nilai anda D \n");   
                break;
            case 5:
            case 6:
                printf("\n Nilai anda C \n");   
                break;
            case 7:
            case 8:
                printf("\n Nilai anda B \n");   
                break;
            case 9:
            case 10:
                printf("\n Nilai anda  A\n");   
                break;
            
            default: printf("\n salah input");
        }
        break;
    
    case 'B':
        printf("\nMasukan Nilai : ");
        scanf("%i", &nilai);
        switch (nilai/10)
        {
            case 1 :
            case 2 :
                printf("\n Nilai anda E \n");   
                break;
            case 3 :
            case 4 :
                printf("\n Nilai anda D \n");   
                break;
            case 5 :
            case 6 :
                printf("\n Nilai anda C \n");   
                break;
            case 7 :
            case 8 :
                printf("\n Nilai anda B \n");   
                break;
            case 9 :
            case 10 :
                printf("\n Nilai anda A \n");   
                break;
            
            default: printf("\n salah input");
        }
        break;
    
    default: printf("\n salah input");
        break;
    }
    return 0;
}