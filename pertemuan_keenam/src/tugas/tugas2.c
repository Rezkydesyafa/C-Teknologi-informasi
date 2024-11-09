#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char character,str[100], vokal_result[10], konsosnan_result[10],total_result[10];
    int huruf_consosnan = 0, huruf_vokal = 0, total_huruf = 0;

    printf("Masukkan sebuah kata atau kalimat : ");
    fgets(str, sizeof(str), stdin);

    // Menghitung jumlah huruf konsonan, vokal, dan total huruf
    for (int i = 0; i < strlen(str); i++) {
        character = str[i];
        if (isalpha(character)) {
            total_huruf++; 
            if (strchr("aeiouAEIOU", character)) {
                huruf_vokal++;
            }
            else {
                huruf_consosnan++;
            }
        }
    }
        fputs("Jumlah huruf vokal: ", stdout);
        sprintf(vokal_result, "%d \n", huruf_vokal); 
        fputs(vokal_result, stdout);                     
        fputs("Jumlah huruf konsonan: ", stdout);
        sprintf(konsosnan_result, "%d\n", huruf_consosnan); 
        fputs(konsosnan_result, stdout);                             
        fputs("Jumlah total huruf: ", stdout);
        sprintf(total_result, "%d\n", total_huruf);  
        fputs(total_result, stdout);               
    return 0;
}
