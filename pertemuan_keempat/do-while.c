#include <stdio.h>

int main (){
    
    int n;
    int i = 1;
    printf("masukan banyak pengulangan : ");
    scanf("%d", &n);
    do{
        printf("Ulang ke - %i \n",i);
        i++;
    }while (i< n);
    
}