#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * @s: parametr
 * Return: 0
 *
 */

int _puts(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		printf("%c",s[i]);
	i++;
}
