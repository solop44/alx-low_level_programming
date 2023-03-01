#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * @n: string.
 * Return: string
 */

char *string_toupper(char *n)
{
	int i, length = strlen(n);

	for (i = 0; i < length; i++)
	{
		n[i] = toupper(n[i]);
	}

	return (n);

}
