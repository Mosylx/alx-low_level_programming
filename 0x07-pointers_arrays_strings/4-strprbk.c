#include "main.h"

/**
 * _strprbk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 *
 * Return: apointer to the byte in s that matches oneof
 * the bytes in accept or NULL if no such byte is found
 */

char *_strprbk(char *s, char *accept)
{
	unsigned inti, j;
	
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s +i) == *(accept + j))
				return (s + i);
		}
	}

	return ('\0');
}

