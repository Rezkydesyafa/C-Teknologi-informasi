// C Program to create a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file pointer
    FILE *fptr;

    // creating file using fopen() access mode "w"
    fptr = fopen("file.txt", "w");

    // checking if the file is created
    if (fptr == NULL)
    {
        printf("file tidak dapat dibuka!");
        exit(0);
    }
    else
    {
        printf("Program berhasil dibuat");
    }

    return 0;
}
