#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * @s: parametr
 * Return: 0
 *
 */

void _puts(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		printf("%c\n",s[i]);
	i++;
}
