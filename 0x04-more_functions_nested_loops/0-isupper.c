#include "main.h"

/**
* main - checks if its uppercase
* @c: input character.
* Return: 0
*/

int main(void)
{
	char _isupper(char c)
	{
		if (c >= 65 && c < 91)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
