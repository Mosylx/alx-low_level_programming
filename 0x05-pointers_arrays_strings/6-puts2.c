#include "main.h"

/**
 * puts2 - print every other character of astring
 * @str: string
 *
 * Return : Null
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
