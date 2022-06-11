#include "main.h"

/**
 * _isdigit - checks uppercase
 * @c: parameter
 * Return: 0 if sucessful
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
