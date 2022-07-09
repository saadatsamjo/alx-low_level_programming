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
	int x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (argc != 3)
		printf("Error\n");
		return (1);
	{
		printf("%d", x * y);
	}
	return (0);
}
