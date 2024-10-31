#include <stdio.h>

int main()
{
    int i,j;
    printf("Input nilai i : \n");
    scanf("%d", &i);
    while (i <= 10) 
    {
        printf("\ni : %d\n", i);
        j=i+1;
        while (j <= 10)
        {
            printf("       j : %d\n", j);
            j=j+1;
        }

        i=i+1;
    }
}