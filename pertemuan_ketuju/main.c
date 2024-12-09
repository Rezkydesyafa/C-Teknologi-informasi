#include <stdio.h>

int main()
{

    char nama[100];
    int umur;

    printf("Masukan nama : ");
    scanf("%[^\n]", &nama);
    fflush(stdin);
    printf("Masukan umur : ");
    scanf("%[^\n]", &umur);
    fflush(stdin);

    FILE *out = fopen("text.txt", "a");

    fprintf(out, "%s#%d\n", nama, umur);

    fclose(out);

    FILE *in = fopen("text.txt", "r");

    if (!in)
    {
        printf("Tidak ada file ");
    }
    else
    {

        while (!feof(in))
        {
            /* code */
            fscanf(in, "%[^#]#%d\n", &nama, &umur);
            fflush(stdin);
            printf("%s %d\n", nama, umur);
        }

        fclose(in);
    }
    getchar();
}