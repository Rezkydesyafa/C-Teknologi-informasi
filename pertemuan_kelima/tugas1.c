#include <stdio.h>

int main() {

    printf("Bilangan berpangkat 2 dari 1 sampai 10:\n");
    int pangkat_dua;

    for (int i = 1; i <= 10 ; i++) {
        pangkat_dua = i * i;
        
        printf("%d^2 = %d\n", i, pangkat_dua);
      
    }
    return 0;
    
}
