#include <stdio.h>
#include <math.h>

/**
 * main - finds product arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i;

	if(argc !== 3)
		return (1);
	else
	{
		printf("%d", argv[1]*argv[2]);
	}
	return (0);
}
