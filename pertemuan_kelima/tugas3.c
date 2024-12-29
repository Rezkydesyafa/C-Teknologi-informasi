
#include <stdio.h>

int main()
{
	int a, j, k, l;

	for (a = 1; a <= 7; a++)
	{
		for (j = 1; j <= 7 - a; j++)
			printf("%2d", j);
		for (k = 0; k <= 2 * a - 1; k++)
			printf("  ");
		// for ( l = 7 - a; l >= 1; l--)
		// 	if (l != 7)
		// 		printf("%2d", l);
		printf("\n");
	}
}