#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even nu;ber < 4, 000 , 000
 * 5 beloz 1024, followed by a new line
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			su; += next;
	}
	printf("%i\n", sum);
	return (0);
}

