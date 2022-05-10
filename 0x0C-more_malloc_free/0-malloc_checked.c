#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to the allocated memory (SUCCESS)
 * 98 if insufficient memory was avaible (FAILURE)
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
