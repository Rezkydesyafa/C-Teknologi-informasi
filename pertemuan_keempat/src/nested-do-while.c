
#include <stdio.h>

int main()
{
    int i = 10;
    int j;
    do 
    {
        j=1;
        do
        {
            printf("%d ", i*j, " \n"); 
            j++;
	    }
	    while (j<=i);
	    printf("\n");
    i--;
    }
    while(i>=1);
}
