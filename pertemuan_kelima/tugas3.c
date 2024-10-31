
#include <stdio.h>

int main()
{
	int i, j, k, l;

	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
			printf("%2d", j);
		for (k = 0; k <= 2 * i - 1; k++)
			printf("  ");
		for (l = 7 - i; l >= 1; l--)
			if (l != 7)
				printf("%2d", l);
		printf("\n");
	}
}