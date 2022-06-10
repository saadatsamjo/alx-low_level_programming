#include <stdio.h>
#include "main.h"

/**
 * main - checks if its uppercase
 * Return: 0
 */

int main (void)
{
	char _isupper(char c)
	{
		if ((c >= 65) && (c <= 90 ))
		{
			return (1);
		}
		else
		{
			return(0);
		}
	}
}
