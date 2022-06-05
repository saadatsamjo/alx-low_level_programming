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
	for (i = 48; i < 58; i++)
{
	putchar(i);
}
for (i = 97; i < 103; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
