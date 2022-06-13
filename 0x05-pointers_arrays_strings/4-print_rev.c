#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: prmt
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int i;

	for (i=(sizeof(s))/(sizeof(s[0])); i>=0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
