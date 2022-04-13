#include "main.h"

/**
 * checks for lower case character
 * return void
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
