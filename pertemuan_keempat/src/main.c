#include <stdio.h>


int main () {

    int n;
    int i ;


    printf("masukan banyak pengulangan : ");
    scanf("%d", &n);

    for ( i = 1; i < n; i++)
    {
        printf(" angka ke - %i \n", i+1);
    }
}