#include <stdio.h>
#include <string.h>


int main(){
    char username[30], password[30];

    printf("==== Account Login =====\n");
    printf("Username: ");
    scanf("%s", &username);
    printf("Passowrd: ");
    scanf("%s", &password);

    if (strcmp(username, "unisa")==0){
        if (strcmp(password, "ti123")==0){
            printf("Selamat datang !!");
        }else{
            printf("password salah");
        }
    }else{
        printf("Anda belum terdaftar \n");
    }
    
    

    
}

