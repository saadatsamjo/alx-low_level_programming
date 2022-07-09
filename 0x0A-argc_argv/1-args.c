#include <stdio.h>
#include "main.h"
/**
 * main - Print the number of arguments
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d", argc - 1);
	return (0);
}
