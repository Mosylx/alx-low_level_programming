#include "main.h"

/**
 * _strlen - count the lenght of a string
 * @s: string
 *
 * Return: the value of the lenght i
 */

int _strlen(char *s)
{
	int i;

	while (s[i])
		i++;
	return (i);
}
