#include <stdio.h>

int main()
{	

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
			printf(" ");

		for (int k = 1; k <= 2 * (5 - i) + 1; k++)
			printf("%d", k);
			
		printf("\n");
	}
}