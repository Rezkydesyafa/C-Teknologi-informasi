#include <stdio.h>

int main()
{
    for (int x = 5; x >= 1; x--)
    {
        for (int z = 5; z >= x; z--)
        {
            printf("%d ", z);
        }
        printf("\n");
    }
}