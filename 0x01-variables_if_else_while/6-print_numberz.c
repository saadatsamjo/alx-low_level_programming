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
{int i;
	for (i = 0; i < 10; i++)
{
	char chval = i + '0';
	putchar(chval);
}
putchar('\n');
return (0);
}
