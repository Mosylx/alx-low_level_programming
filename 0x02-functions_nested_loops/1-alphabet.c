#include "main.h"

/**
 * print alphabet lower case function
 *
 * return void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}

	_putchar(alphabet);
}
