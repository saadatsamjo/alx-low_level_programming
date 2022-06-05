#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - Print the alfabet
 *
 *Return: Always (Success)
 */
int main(void)
{char i;
char j;

	for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
 for (j = 'A'; j <= 'Z'; j++)
{
	putchar(j);
}
putchar('\n');
return (0);
}
