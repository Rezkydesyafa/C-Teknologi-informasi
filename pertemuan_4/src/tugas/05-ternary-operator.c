#include <stdio.h>
#include <ctype.h>

int main()
{
    int jawaban;
    char pw;

    printf("Berapakah hasil 3+4?\n");
    printf("jawab> ");
    scanf("%d", &jawaban);

    printf("Jawaban anda: %s\n", (jawaban == 7) ? 
    "Benar" : "Salah");
}