#include <stdio.h>

int main()
{
    int nilai;
    char grade;

    printf("=== Program Grade Nilai ===\n");
    printf("Inputkan nilai: ");
    scanf("%i", &nilai);

    // menggunakan percabangan if/esle/if
    if (nilai >= 90 && nilai <=100) {
        grade = 'A';
    } else if (nilai >= 80 && nilai <=89 ) {
        grade = 'B'; // seharusnya B+
    } else if (nilai >= 70 && nilai <=79 ) {
        grade = 'B';
    } else if (nilai >= 60) {
        grade = 'C'; // seharusnya C+
    } else if (nilai >= 50) {
        grade = 'C';
    } else if (nilai >= 40) {
        grade = 'D';
    } else if (nilai >= 30) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("\nNilai: %i\n", nilai);
    printf("Grade anda: %c\n", grade);
}