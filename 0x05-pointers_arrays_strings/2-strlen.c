#include "main.h"

/**
 * _strlen - returns length
 *
 * Rerurn: the length
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
