#include <stdio.h>
#include <string.h>

int main() {
    char member[10], jenis_member[10];
    printf("Apakah Anda Punya member ?\n");
    scanf("%s", &member);

    if (strcmp(member, "ya") == 0 || strcmp (member, "Ya") == 0 || strcmp (member, "YA") == 0 )
    {
        printf("Apakah Jenis member Anda ?\n");
        scanf("%s", &jenis_member);
        
        if (strcmp(jenis_member, "gold") == 0 || strcmp (jenis_member, "Gold") == 0 || strcmp (jenis_member, "GOLD") == 0 )
        {
            printf("Anda mendapat potongan 15%%\n");
        }
        else if (strcmp(jenis_member, "silver") == 0 || strcmp (jenis_member, "Silver") == 0 || strcmp (jenis_member, "SILVER") == 0 )
        {
            printf("Anda mendapat potongan 10%%\n");
        }
        else if (strcmp(jenis_member, "bronze") == 0 || strcmp (jenis_member, "Bronze") == 0 || strcmp (jenis_member, "BRONZE") == 0 )
        {
            printf("Anda mendapat potongan 5%%\n");
        }else
        {
            printf("Salah Input\n");
        }   
    }
    else if (strcmp(member, "tidak") == 0 || strcmp (member, "Tidak") == 0 || strcmp (member, "NO") == 0 )
    {
            printf("Anda tidak dapat potongan\n");    
    }
    else
    {
            printf("Anda salah input\n");      
    }
    return 0;
}