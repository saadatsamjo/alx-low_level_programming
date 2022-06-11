#include "main.h"

/**
* main - checks if its uppercase
* @c: input character.
* Return: 0
*/

char _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
