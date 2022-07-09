#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - finds product arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i, x, y;

	x = strtol(argv[1], NULL, 10);
	y = strtol(argv[2], NULL, 10); 
	if (argc != 3)
		return (1);
	{
		printf("%d", x * y);
	}
	return (0);
}
