#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: pointer
 *
 * Return: Null
 */

void rev_string(char *s)
{
	int i, j, len;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > i)
	{
		len = s[j];
		s[j--] = s[i];
		s[i++] = len;
	}
}
