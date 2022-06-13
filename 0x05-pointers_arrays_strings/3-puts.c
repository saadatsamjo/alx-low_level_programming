#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * @s: parametr
 * Return: 0
 *
 */

void _puts(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
