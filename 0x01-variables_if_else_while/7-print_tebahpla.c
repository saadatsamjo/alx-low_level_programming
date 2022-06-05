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
	for (i = 'z'; i < 'a'; i--)
{
	putchar(i);
}
putchar('\n');
return (0);
}
